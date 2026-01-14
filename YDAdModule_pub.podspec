Pod::Spec.new do |s|
  s.name             = 'YDAdModule_pub'
  s.version          = '3.0.0.7'
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
  s.ios.deployment_target = '11.0'
  s.static_framework = true

  # ========================================
  # 核心模块 (必选)
  # ========================================
  s.subspec 'Core' do |core|
    core.vendored_frameworks = [
      'YDAdModule.xcframework',
      'Frameworks/ZindexBase.framework',  
      'Frameworks/UbiXAdSDK.framework',   
      'Frameworks/UbiXDaq.framework'      
    ]

    # 引入资源bundle
    core.resources = 'YDAdModule.bundle'

    core.dependency 'YFAdsSDK/YFAdsSDK', '6.0.8.0'
    core.dependency 'YFAdsSDK/YFAdsSubstrate', '6.0.8.0'

    # 核心模块定义预编译宏
    core.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_CORE_ENABLED=1 YDADMODULE_CXHR_ENABLED=1 YDADMODULE_YF_ENABLED=1 YDADMODULE_UX_ENABLED=1'
    }
    core.user_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_CORE_ENABLED=1 YDADMODULE_CXHR_ENABLED=1 YDADMODULE_YF_ENABLED=1 YDADMODULE_UX_ENABLED=1',
      'GENERATE_INFOPLIST_FILE' => 'YES'
    }
  end

  # ========================================
  # 穿山甲/字节跳动 ADN (可选)
  # SDK组成：融合SDK + 3个adapter
  # ========================================
  s.subspec 'CSJ' do |csj|
    csj.dependency 'YDAdModule_pub/Core'

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

    # 腾讯广点通SDK
    gdt.dependency 'GDTMobSDK', '4.15.10'

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
  # 泛微 ADN (可选)
  # SDK组成：PTGAdFramework
  # ========================================
  s.subspec 'Fanwei' do |fanwei|
    fanwei.dependency 'YDAdModule_pub/Core'

    # 泛微广告SDK
    fanwei.dependency 'PTGAdFramework', '2.2.98'

    # 定义预编译宏
    fanwei.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_FANWEI_ENABLED=1'
    }
    fanwei.user_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) YDADMODULE_FANWEI_ENABLED=1'
    }
  end

  # ========================================
  # 亿帆 ADN (可选)
  # ========================================
  s.subspec 'YF' do |yf|
    yf.dependency 'YDAdModule_pub/Core'
  end

  # ========================================
  # UBiX ADN (可选)
  # ========================================
  s.subspec 'UX' do |ux|
    ux.dependency 'YDAdModule_pub/Core'
  end

  # ========================================
  # 默认配置
  # ========================================
  s.default_subspecs = 'Core', 'CSJ', 'GDT', 'KS', 'BD'
end
