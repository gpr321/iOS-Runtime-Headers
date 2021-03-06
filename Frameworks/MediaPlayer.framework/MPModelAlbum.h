/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelAlbum : MPModelObject {
    MPModelArtist * _artist;
    id /* block */  _artworkCatalogBlock;
    BOOL  _classical;
    BOOL  _compilation;
    NSString * _copyrightText;
    int  _discCount;
    NSString * _editorNotes;
    MPModelGenre * _genre;
    BOOL  _hasCleanContent;
    BOOL  _hasExplicitContent;
    int  _keepLocalEnableState;
    int  _keepLocalManagedStatus;
    NSDate * _lastDevicePlaybackDate;
    BOOL  _libraryAddEligible;
    BOOL  _libraryAdded;
    NSDate * _libraryAddedDate;
    int  _maximumItemTrackNumber;
    BOOL  _preorder;
    NSDateComponents * _releaseDateComponents;
    MPModelSong * _representativeSong;
    NSString * _shortEditorNotes;
    id /* block */  _songPopularityBlock;
    NSString * _title;
    int  _trackCount;
    float  _volumeNormalization;
    int  _year;
}

@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (getter=isClassical, nonatomic) BOOL classical;
@property (getter=isCompilation, nonatomic) BOOL compilation;
@property (nonatomic, copy) NSString *copyrightText;
@property (nonatomic) int discCount;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, retain) MPModelGenre *genre;
@property (nonatomic) BOOL hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent;
@property (nonatomic) int keepLocalEnableState;
@property (nonatomic) int keepLocalManagedStatus;
@property (nonatomic, copy) NSDate *lastDevicePlaybackDate;
@property (getter=isLibraryAddEligible, nonatomic) BOOL libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) BOOL libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) int maximumItemTrackNumber;
@property (getter=isPreorder, nonatomic) BOOL preorder;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, retain) MPModelSong *representativeSong;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) id /* block */ songPopularityBlock;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int trackCount;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) int year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelPropertyAlbumArtwork__PROPERTY;
+ (id)__MPModelPropertyAlbumCopyrightText__PROPERTY;
+ (id)__MPModelPropertyAlbumDiscCount__PROPERTY;
+ (id)__MPModelPropertyAlbumEditorNotes__PROPERTY;
+ (id)__MPModelPropertyAlbumEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyAlbumHasCleanContent__PROPERTY;
+ (id)__MPModelPropertyAlbumHasExplicitContent__PROPERTY;
+ (id)__MPModelPropertyAlbumIsClassical__PROPERTY;
+ (id)__MPModelPropertyAlbumIsCompilation__PROPERTY;
+ (id)__MPModelPropertyAlbumKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyAlbumKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyAlbumLastDevicePlaybackDate__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyAlbumLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyAlbumMaximumItemTrackNumber__PROPERTY;
+ (id)__MPModelPropertyAlbumPreorder__PROPERTY;
+ (id)__MPModelPropertyAlbumReleaseDateComponents__PROPERTY;
+ (id)__MPModelPropertyAlbumShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyAlbumSongPopularity__PROPERTY;
+ (id)__MPModelPropertyAlbumTitle__PROPERTY;
+ (id)__MPModelPropertyAlbumTrackCount__PROPERTY;
+ (id)__MPModelPropertyAlbumVolumeNormalization__PROPERTY;
+ (id)__MPModelPropertyAlbumYear__PROPERTY;
+ (id)__MPModelRelationshipAlbumArtist__PROPERTY;
+ (id)__MPModelRelationshipAlbumGenre__PROPERTY;
+ (id)__MPModelRelationshipAlbumRepresentativeSong__PROPERTY;
+ (id)__artist__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__classical__KEY;
+ (id)__compilation__KEY;
+ (id)__copyrightText__KEY;
+ (id)__discCount__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__genre__KEY;
+ (id)__hasCleanContent__KEY;
+ (id)__hasExplicitContent__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__lastDevicePlaybackDate__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__maximumItemTrackNumber__KEY;
+ (id)__preorder__KEY;
+ (id)__releaseDateComponents__KEY;
+ (id)__representativeSong__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__songPopularityBlock__KEY;
+ (id)__title__KEY;
+ (id)__trackCount__KEY;
+ (id)__volumeNormalization__KEY;
+ (id)__year__KEY;
+ (id)kindWithSongKind:(id)arg1;
+ (id)kindWithSongKind:(id)arg1 options:(unsigned int)arg2;
+ (id)kindWithVariants:(unsigned int)arg1 songKind:(id)arg2;
+ (id)kindWithVariants:(unsigned int)arg1 songKind:(id)arg2 options:(unsigned int)arg3;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;

- (void).cxx_destruct;
- (id)artist;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)copyrightText;
- (id)descriptionWithType:(int)arg1;
- (int)discCount;
- (id)editorNotes;
- (id)genre;
- (BOOL)hasCleanContent;
- (BOOL)hasExplicitContent;
- (BOOL)isClassical;
- (BOOL)isCompilation;
- (BOOL)isLibraryAddEligible;
- (BOOL)isLibraryAdded;
- (BOOL)isPreorder;
- (int)keepLocalEnableState;
- (int)keepLocalManagedStatus;
- (id)lastDevicePlaybackDate;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })libraryAddStatusObserverConfiguration;
- (id)libraryAddedDate;
- (int)libraryRemovalSupportedOptions;
- (int)maximumItemTrackNumber;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)releaseDateComponents;
- (id)representativeSong;
- (void)setArtist:(id)arg1;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setClassical:(BOOL)arg1;
- (void)setCompilation:(BOOL)arg1;
- (void)setCopyrightText:(id)arg1;
- (void)setDiscCount:(int)arg1;
- (void)setEditorNotes:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasCleanContent:(BOOL)arg1;
- (void)setHasExplicitContent:(BOOL)arg1;
- (void)setKeepLocalEnableState:(int)arg1;
- (void)setKeepLocalManagedStatus:(int)arg1;
- (void)setLastDevicePlaybackDate:(id)arg1;
- (void)setLibraryAddEligible:(BOOL)arg1;
- (void)setLibraryAdded:(BOOL)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setMaximumItemTrackNumber:(int)arg1;
- (void)setPreorder:(BOOL)arg1;
- (void)setReleaseDateComponents:(id)arg1;
- (void)setRepresentativeSong:(id)arg1;
- (void)setShortEditorNotes:(id)arg1;
- (void)setSongPopularityBlock:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackCount:(int)arg1;
- (void)setVolumeNormalization:(float)arg1;
- (void)setYear:(int)arg1;
- (id)shortEditorNotes;
- (id /* block */)songPopularityBlock;
- (id)songPopularityForIdentifiers:(id)arg1;
- (id)title;
- (int)trackCount;
- (float)volumeNormalization;
- (int)year;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)_radioStationMatchMetadata;

@end
