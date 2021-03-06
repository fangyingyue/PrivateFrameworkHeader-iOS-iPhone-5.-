/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSManagedObjectID, UIImage;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification  {
    UIImage *_image;
    NSManagedObjectID *_assetID;
}

@property(readonly) UIImage * image;
@property(readonly) NSManagedObjectID * assetID;

+ (id)notification;

- (id)object;
- (id)image;
- (id)name;
- (id)_init;
- (id)assetID;
- (id)userInfo;
- (id)description;
- (id)init;
- (void)dealloc;

@end
