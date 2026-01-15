//
//  YDADXMaterialMeta.h
//  YDAdModule
//
//  Created by dfy on 2024/6/5.
//

#ifndef YDADXMaterialMeta_h
#define YDADXMaterialMeta_h

typedef NS_ENUM(NSInteger, YDADXInteractionType) {
    YDADXInteractionTypeCustorm = 0,
    YDADXInteractionTypeNO_INTERACTION = 1,  // pure ad display
    YDADXInteractionTypeURL = 2,             // open the webpage using a browser
    YDADXInteractionTypePage = 3,            // open the webpage within the app
    YDADXInteractionTypeDownload = 4,        // download the app
    YDADXInteractionTypePhone = 5,           // make a call
    YDADXInteractionTypeMessage = 6,         // send messages
    YDADXInteractionTypeEmail = 7,           // send email
    YDADXInteractionTypeVideoAdDetail = 8    // video ad details page
};

#endif /* YDADXMaterialMeta_h */
