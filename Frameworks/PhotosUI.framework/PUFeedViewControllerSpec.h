/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedViewControllerSpec : NSObject {
    PUPhotosGridViewControllerSpec * _gridSpec;
    long long  _largeNumberOfSubjectsForLikes;
    int  _largeTileFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _largeTileMaximumFillingSize;
    int  _largeTileQualityImageFormat;
    int  _mediumTileFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _mediumTileMaximumFillingSize;
    int  _mediumTileQualityImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumVideoTileSize;
    PUPhotosPickerViewControllerSpec * _photosPickerSpec;
    PUFeedViewControllerSpec * _popoverFeedViewControllerSpec;
    long long  _promptStyle;
    NSIndexSet * _qualityImageFormats;
    bool  _shouldHideBarsInLandscape;
    bool  _shouldShowInvitationsInPopover;
    bool  _shouldUseAspectThumbnails;
    bool  _shouldUseFullscreenLayout;
    int  _smallTileFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _smallTileMaximumFittingSize;
    double  _smallTilePanoAspectRatio;
    int  _smallTilePanoQualityImageFormat;
    int  _smallTileQualityImageFormat;
    int  _squareThumbnailFastImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _squareThumbnailMaximumSize;
    int  _squareThumbnailQualityImageFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    int  _veryLargeTileFastImageFormat;
    int  _veryLargeTileQualityImageFormat;
}

@property (nonatomic, readonly) PUPhotosGridViewControllerSpec *gridSpec;
@property (nonatomic, readonly) long long largeNumberOfSubjectsForLikes;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumVideoTileSize;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerSpec;
@property (nonatomic, readonly) PUFeedViewControllerSpec *popoverFeedViewControllerSpec;
@property (nonatomic, readonly) long long promptStyle;
@property (setter=_setQualityImageFormats:, nonatomic, copy) NSIndexSet *qualityImageFormats;
@property (nonatomic, readonly) bool shouldHideBarsInLandscape;
@property (nonatomic, readonly) bool shouldShowInvitationsInPopover;
@property (nonatomic, readonly) bool shouldUseAspectThumbnails;
@property (nonatomic, readonly) bool shouldUseFullscreenLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (void)_setQualityImageFormats:(id)arg1;
- (bool)canUseSimplePreheatManager;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; }*)arg1;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize { double x1; double x2; })arg3 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(long long)arg2;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; }*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(bool)arg4 collectionViewType:(long long)arg5;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(bool)arg7;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (void)getFastImageFormat:(out int*)arg1 qualityImageFormat:(out int*)arg2 forSourceSize:(struct CGSize { double x1; double x2; })arg3 destinationSize:(struct CGSize { double x1; double x2; })arg4 allowCrop:(bool)arg5;
- (void)getReferenceMaximumLength:(double*)arg1 minimumNumberOfTilesToOmit:(long long*)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (id)gridSpec;
- (id)init;
- (long long)largeNumberOfSubjectsForLikes;
- (struct CGSize { double x1; double x2; })minimumVideoTileSize;
- (id)photosPickerSpec;
- (id)popoverFeedViewControllerSpec;
- (long long)promptStyle;
- (id)qualityImageFormats;
- (bool)shouldHideBarsInLandscape;
- (bool)shouldShowCommentBadgesInCollectionViewType:(long long)arg1;
- (bool)shouldShowDatesInSectionFootersInCollectionViewType:(long long)arg1;
- (bool)shouldShowInvitationsInPopover;
- (bool)shouldShowLikeButtonForCollectionViewType:(long long)arg1;
- (bool)shouldShowSeeAllInSectionFootersInCollectionViewType:(long long)arg1;
- (bool)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(long long)arg1;
- (bool)shouldUseAspectThumbnails;
- (bool)shouldUseFullscreenLayout;
- (double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (struct CGSize { double x1; double x2; })thumbnailSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateFormats;

@end