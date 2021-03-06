/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class UIFont, UIImageView, NSString, AccountSettingsUILinkButton, NSURL;

@interface AccountSettingsUILinkButtonView : UIView <PreferencesTableCustomView> {
    AccountSettingsUILinkButton *_linkButton;
    NSURL *_helpURL;
    float _height;
    UIFont *_font;
    NSString *_text;
    UIImageView *_arrowImageView;
    BOOL _underline;
    BOOL _showArrow;
}

@property BOOL showArrow;
@property BOOL underline;
@property(retain) NSURL * url;
@property(retain) UIFont * font;
@property(retain) NSString * text;


- (float)preferredHeightForWidth:(float)arg1;
- (BOOL)underline;
- (void)setUnderline:(BOOL)arg1;
- (id)initWithSpecifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)font;
- (id)text;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)showArrow;
- (void)setShowArrow:(BOOL)arg1;
- (void)_goToAccountURL;

@end
