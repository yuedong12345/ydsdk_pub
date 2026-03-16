Pod::Spec.new do |s|
  s.name             = 'YDAdModule_pub'
  s.version          = '3.0.1.2'
  s.license          = { :type => 'MIT' }
  s.homepage         = 'https://github.com/yuedong12345/ydsdk_pub.git'
  s.author           = { 'yuedong12345' => 'yuedong12345@126.com' }
  s.summary          = 'Advibe iOS融合广告SDK'
  s.description      = <<-DESC
    Advibe iOS端融合广告SDK，支持多广告网络聚合。
    可选的第三方ADN：穿山甲(字节跳动)、广点通(腾讯)、百度、快手。
    开发者可根据需求选择集成的广告网络。
  DESC
  s.source           = { :git => 'https://github.com/yuedong12345/ydsdk_pub.git', :tag =>s.version.to_s }
  s.ios.deployment_target = '12.0'
  s.static_framework = true

  # ========================================
  # 核心模块 (必选)
  # ========================================
  s.subspec 'Core' do |core|
    core.vendored_frameworks = [
      'YDAdModule.xcframework',
      'Frameworks/UbiXAdSDK.framework',
      'Frameworks/UbiXDaq.framework'
    ]

    # CXHR ADN - ZindexBase SDK (仅支持真机，不支持模拟器)
    # 使用 preserve_paths 保留文件，通过条件编译在真机时链接
    core.preserve_paths = 'Frameworks/ZindexBase.framework'

    # 引入资源bundle
    core.resources = 'YDAdModule.bundle'

    # core.preserve_paths = 'YDAdModule/Frameworks/ZindexBase.framework'
    
    core.dependency 'YFAdsSDK/YFAdsSDK', '6.0.8.0'
    core.dependency 'YFAdsSDK/YFAdsSubstrate', '6.0.8.0'
    
    # 'FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]' => '$(inherited) "${PODS_TARGET_SRCROOT}/YDAdModule/Frameworks"',
    # 核心模块定义预编译宏
    core.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_CORE_ENABLED=1 YDADMODULE_CXHR_ENABLED=1 YDADMODULE_YF_ENABLED=1 YDADMODULE_UX_ENABLED=1',
      # 真机：手动链接 ZindexBase
      'OTHER_LDFLAGS[sdk=iphoneos*]' => '$(inherited) -framework ZindexBase',
      'FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]' => '$(inherited) "${PODS_TARGET_SRCROOT}/Frameworks"',
      # 模拟器：不链接 ZindexBase
      'OTHER_LDFLAGS[sdk=iphonesimulator*]' => '$(inherited)',
    }
    # 'FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]' => '$(inherited) "${PODS_TARGET_SRCROOT}/YDAdModule/Frameworks"',
    core.user_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_CORE_ENABLED=1 YDADMODULE_CXHR_ENABLED=1 YDADMODULE_YF_ENABLED=1 YDADMODULE_UX_ENABLED=1',
      # 真机：手动链接 ZindexBase
      'OTHER_LDFLAGS[sdk=iphoneos*]' => '$(inherited) -framework ZindexBase',
      'FRAMEWORK_SEARCH_PATHS[sdk=iphoneos*]' => '$(inherited) "${PODS_TARGET_SRCROOT}/Frameworks"',
      # 模拟器：不链接 ZindexBase
      'OTHER_LDFLAGS[sdk=iphonesimulator*]' => '$(inherited)',
      'GENERATE_INFOPLIST_FILE' => 'YES'
    }
  end

  # ========================================
  # 穿山甲/字节跳动 ADN (可选)
  # SDK组成：融合SDK + 3个adapter
  # ========================================
  s.subspec 'CSJ' do |csj|
    csj.dependency 'YDAdModule_pub/Core'

    # CSJ适配器xcframework
    csj.vendored_frameworks = 'Frameworks/YDAdModule_CSJ.xcframework'

    # 穿山甲融合SDK核心
    csj.dependency 'Ads-Fusion-CN-Beta/CSJMediation', '6.4.1.0'

    # 穿山甲融合适配器（用于在穿山甲框架内接入其他ADN）
    csj.dependency 'CSJMGdtAdapter', '4.14.45.0'    # 广点通适配器
    csj.dependency 'CSJMBaiduAdapter', '5.325.1'    # 百度适配器
    csj.dependency 'CSJMKsAdapter', '3.3.55.0.0'    # 快手适配器

    # 定义预编译宏
    csj.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_CSJ_ENABLED=1'
    }
    csj.user_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_CSJ_ENABLED=1'
    }
  end

  # ========================================
  # 广点通/腾讯 ADN (可选)
  # SDK组成：GDTMobSDK
  # ========================================
  s.subspec 'GDT' do |gdt|
    gdt.dependency 'YDAdModule_pub/Core'

    # GDT适配器xcframework
    gdt.vendored_frameworks = 'Frameworks/YDAdModule_GDT.xcframework'

    # 腾讯广点通SDK
    gdt.dependency 'GDTMobSDK', '4.15.70'

    # 定义预编译宏
    gdt.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_GDT_ENABLED=1'
    }
    gdt.user_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_GDT_ENABLED=1'
    }
  end

  # ========================================
  # 快手 ADN (可选)
  # SDK组成：KSAdSDK
  # ========================================
  s.subspec 'KS' do |ks|
    ks.dependency 'YDAdModule_pub/Core'

    # KS适配器xcframework
    ks.vendored_frameworks = 'Frameworks/YDAdModule_KS.xcframework'

    # 快手广告SDK
    ks.dependency 'KSAdSDK', '3.3.69.3'

    # 定义预编译宏
    ks.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_KS_ENABLED=1'
    }
    ks.user_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_KS_ENABLED=1'
    }
  end

  # ========================================
  # 百度 ADN (可选)
  # SDK组成：BaiduMobAdSDK
  # ========================================
  s.subspec 'BD' do |bd|
    bd.dependency 'YDAdModule_pub/Core'

    # BD适配器xcframework
    bd.vendored_frameworks = 'Frameworks/YDAdModule_BD.xcframework'

    # 百度移动广告SDK
    bd.dependency 'BaiduMobAdSDK', '5.14'

    # 定义预编译宏
    bd.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_BD_ENABLED=1'
    }
    bd.user_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_BD_ENABLED=1'
    }
  end

  # ========================================
  # 默认配置
  # ========================================
  #s.default_subspecs = 'Core', 'CSJ', 'GDT', 'KS', 'BD'
end
