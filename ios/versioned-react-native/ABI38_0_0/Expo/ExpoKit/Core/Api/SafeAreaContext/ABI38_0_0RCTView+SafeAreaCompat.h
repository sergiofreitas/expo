#import <UIKit/UIKit.h>
#import <ABI38_0_0React/ABI38_0_0RCTDefines.h>
#import <ABI38_0_0React/ABI38_0_0RCTView.h>

ABI38_0_0RCT_EXTERN BOOL ABI38_0_0UIEdgeInsetsEqualToEdgeInsetsWithThreshold(UIEdgeInsets insets1, UIEdgeInsets insets2, CGFloat threshold);

NS_ASSUME_NONNULL_BEGIN

@interface UIView(SafeAreaCompat)

- (BOOL)nativeSafeAreaSupport;
- (UIEdgeInsets)safeAreaInsetsOrEmulate;

@end

NS_ASSUME_NONNULL_END
