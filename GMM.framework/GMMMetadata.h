/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMMetadata : PBCodable  {
    BOOL _hasNeedsLinkStreetRange;
    BOOL _needsLinkStreetRange;
    BOOL _hasFetchDepthMap;
    BOOL _fetchDepthMap;
    BOOL _hasFetchPanoMap;
    BOOL _fetchPanoMap;
}

@property BOOL hasNeedsLinkStreetRange;
@property BOOL needsLinkStreetRange;
@property BOOL hasFetchDepthMap;
@property BOOL fetchDepthMap;
@property BOOL hasFetchPanoMap;
@property BOOL fetchPanoMap;


- (BOOL)readFrom:(id)arg1;
- (void)setHasFetchPanoMap:(BOOL)arg1;
- (BOOL)hasFetchPanoMap;
- (void)setHasFetchDepthMap:(BOOL)arg1;
- (BOOL)hasFetchDepthMap;
- (void)setHasNeedsLinkStreetRange:(BOOL)arg1;
- (BOOL)hasNeedsLinkStreetRange;
- (BOOL)fetchPanoMap;
- (BOOL)fetchDepthMap;
- (BOOL)needsLinkStreetRange;
- (void)setFetchPanoMap:(BOOL)arg1;
- (void)setFetchDepthMap:(BOOL)arg1;
- (void)setNeedsLinkStreetRange:(BOOL)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
