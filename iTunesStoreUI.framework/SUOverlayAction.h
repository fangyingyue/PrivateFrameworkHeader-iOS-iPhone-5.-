/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject  {
    int _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property int actionType;
@property int animationCount;
@property(retain) UIViewController * otherViewController;
@property(retain) SUOverlayTransition * transition;
@property(retain) UIViewController * viewController;


- (id)transition;
- (void)setTransition:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)setAnimationCount:(int)arg1;
- (int)animationCount;
- (void)dealloc;
- (void)setOtherViewController:(id)arg1;
- (id)otherViewController;
- (void)setActionType:(int)arg1;
- (int)actionType;

@end
