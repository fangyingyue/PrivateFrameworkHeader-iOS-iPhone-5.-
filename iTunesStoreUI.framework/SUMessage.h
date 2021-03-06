/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSMutableDictionary, NSArray;

@interface SUMessage : NSObject <NSCopying> {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSArray *_messageParts;
    NSURL *_postURL;
    NSMutableDictionary *_uploadURLs;
}

@property(copy) NSArray * messageParts;
@property(copy) NSURL * postURL;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)uploadURLForMIMEType:(id)arg1;
- (void)setUploadURL:(id)arg1 forUTI:(id)arg2;
- (void)setPostURL:(id)arg1;
- (void)setMessageParts:(id)arg1;
- (id)postURL;
- (id)messageParts;
- (id)uploadURLForUTI:(id)arg1;
- (id)_initSUMessage;
- (id)initWithMessageParts:(id)arg1;

@end
