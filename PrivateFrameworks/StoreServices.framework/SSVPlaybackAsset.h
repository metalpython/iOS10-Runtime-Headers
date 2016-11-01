/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackAsset : NSObject {
    NSDictionary * _assetDictionary;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly, copy) NSDictionary *assetDictionary;
@property (nonatomic, readonly) NSString *downloadKey;
@property (nonatomic, readonly) NSString *flavor;
@property (nonatomic, readonly) NSArray *sinfs;

- (void).cxx_destruct;
- (id)URLString;
- (id)assetDictionary;
- (id)description;
- (id)downloadKey;
- (id)flavor;
- (unsigned long long)hash;
- (id)initWithAssetDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sinfs;

@end