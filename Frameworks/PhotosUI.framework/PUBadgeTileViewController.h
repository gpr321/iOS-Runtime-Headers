/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {
    struct PXAssetBadgeInfo { 
        unsigned int badges; 
        double duration; 
        int count; 
    }  __badgeInfo;
    PXUIAssetBadgeView * __badgeView;
    BOOL  __isOverContent;
    BOOL  __needsUpdateBadgeInfo;
    BOOL  __needsUpdateBadgeView;
    BOOL  __shouldAnimateNextBadgeViewUpdate;
    PUAssetViewModel * _assetViewModel;
}

@property (setter=_setBadgeInfo:, nonatomic) struct PXAssetBadgeInfo { unsigned int x1; double x2; int x3; } _badgeInfo;
@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (setter=_setOverContent:, nonatomic) BOOL _isOverContent;
@property (setter=_setNeedsUpdateBadgeInfo:, nonatomic) BOOL _needsUpdateBadgeInfo;
@property (setter=_setNeedsUpdateBadgeView:, nonatomic) BOOL _needsUpdateBadgeView;
@property (setter=_setShouldAnimateNextBadgeViewUpdate:, nonatomic) BOOL _shouldAnimateNextBadgeViewUpdate;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (struct PXAssetBadgeInfo { unsigned int x1; double x2; int x3; })_badgeInfoForAssetViewModel:(id)arg1;
+ (struct CGSize { float x1; float x2; })_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo { unsigned int x1; double x2; int x3; })arg1;
+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned int x1; double x2; int x3; })arg2 isOverContent:(BOOL)arg3 hideLivePhotoBadge:(BOOL)arg4 animated:(BOOL)arg5;
+ (struct CGSize { float x1; float x2; })badgeTileSizeForAssetViewModel:(id)arg1;

- (void).cxx_destruct;
- (struct PXAssetBadgeInfo { unsigned int x1; double x2; int x3; })_badgeInfo;
- (id)_badgeView;
- (void)_invalidateBadgeInfo;
- (void)_invalidateBadgeView;
- (BOOL)_isOverContent;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateBadgeInfo;
- (BOOL)_needsUpdateBadgeView;
- (void)_setBadgeInfo:(struct PXAssetBadgeInfo { unsigned int x1; double x2; int x3; })arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBadgeInfo:(BOOL)arg1;
- (void)_setNeedsUpdateBadgeView:(BOOL)arg1;
- (void)_setOverContent:(BOOL)arg1;
- (void)_setShouldAnimateNextBadgeViewUpdate:(BOOL)arg1;
- (BOOL)_shouldAnimateNextBadgeViewUpdate;
- (void)_updateBadgeInfoIfNeeded;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)loadView;
- (void)prepareForReuse;
- (void)setAssetViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end