//
//  NSObject+KJKVO.h
//  KJExtensionHandler
//
//  Created by 杨科军 on 2020/10/29.
//  https://github.com/yangKJ/KJExtensionHandler
//  键值监听封装，自动释放
/*  使用规则
 [self.label kj_observeKey:@"text" ObserveResultBlock:^(id _Nonnull newValue, id _Nonnull oldValue) {
     NSLog(@"%@",newValue);
 }];
*/
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^KJObserveResultBlock) (id newValue, id oldValue);
@interface NSObject (KJKVO)
/// 记录已经添加监听的keyPath与对应的block
@property(nonatomic,strong,readonly)NSMutableDictionary *kObserveDictionary;
/// kvo监听
- (void)kj_observeKey:(NSString*)keyPath ObserveResultBlock:(KJObserveResultBlock)block;

@end

NS_ASSUME_NONNULL_END
