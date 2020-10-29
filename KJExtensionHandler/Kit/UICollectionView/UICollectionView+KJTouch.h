//
//  UICollectionView+KJTouch.h
//  KJEmitterView
//
//  Created by 杨科军 on 2020/9/18.
//  Copyright © 2020 杨科军. All rights reserved.
//  https://github.com/yangKJ/KJExtensionHandler
//  获取touch事件处理

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, KJMoveStateType) {
    KJMoveStateTypeBegin = 0,
    KJMoveStateTypeMove,
    KJMoveStateTypeEnd,
    KJMoveStateTypeCancelled,
};
typedef void(^KJMoveBlock)(KJMoveStateType state,CGPoint point);
@interface UICollectionView (KJTouch)
/// 开启方法交换
@property(nonatomic,assign)bool kOpenExchange;
/// Touch里面移动回调，需要开启方法交换才处理
@property(nonatomic,readwrite,copy)KJMoveBlock moveblock;
@end

NS_ASSUME_NONNULL_END
