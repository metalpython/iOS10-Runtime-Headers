/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UINavigationBar, NSString, UIView;

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate> {
    UIView *_top;
    UIView *_bottom;
    UIView *_interactive;
    UIView *_overlay;
    UINavigationBar *_navBar;
    UIView *_header;
    UIView *_footer;
    long long _orientation;
    struct { 
        unsigned int transitioning : 1; 
        unsigned int headerViewIsVisible : 1; 
        unsigned int footerViewIsVisible : 1; 
    } _controllerViewFlags;
}

@property(readonly) UINavigationBar * navigationBar;
@property(retain) UIView * topView;
@property(retain) UIView * bottomView;
@property(retain) UIView * headerView;
@property(retain) UIView * footerView;
@property(getter=headerViewIsHidden) bool headerViewHidden;
@property(getter=footerViewIsHidden) bool footerViewHidden;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)interactiveView;
- (void)_adjustViewFrame:(id)arg1;
- (void)setFooterViewHidden:(bool)arg1;
- (void)setHeaderViewHidden:(bool)arg1;
- (void)setFooterViewHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHeaderViewHidden:(bool)arg1 animated:(bool)arg2;
- (bool)headerViewIsHidden;
- (bool)footerViewIsHidden;
- (void)setInteractiveView:(id)arg1 removePrevious:(bool)arg2;
- (void)transitionDidEnd;
- (void)setTopViewAlpha:(double)arg1;
- (void)setInteractiveView:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)transitionWillBegin;
- (void)setOverlayView:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFooterView:(id)arg1;
- (id)footerView;
- (id)bottomView;
- (id)topView;
- (void)setHeaderView:(id)arg1;
- (id)headerView;
- (id)navigationBar;
- (void)layoutSubviews;

@end