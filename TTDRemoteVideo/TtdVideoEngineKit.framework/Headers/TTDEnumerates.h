//
//  TTDEnumerates.h
//  TtdVideoEngine
//
//  Created by 林英彬 on 2018/3/21.
//  Copyright © 2018年 linyingbin. All rights reserved.
//

#ifndef TTDEnumerates_h
#define TTDEnumerates_h

typedef NS_ENUM(NSInteger, TTDVideoProfile) {
    TTDVideoProfile240P     = 20,   // 分辨率240*320 码率200kbps
    TTDVideoProfile240P_2   = 21,   // 分辨率240*320 码率300
    TTDVideoProfile360P     = 30,   // 分辨率360*480 码率600
    TTDVideoProfile480P     = 40,   // 分辨率480*640 码率750
    TTDVideoProfile480P_2   = 41    // 分辨率480*640 码率1000
};

#endif /* TTDEnumerates_h */
