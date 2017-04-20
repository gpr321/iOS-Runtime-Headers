/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UUID;
    int  _akSerializationPlatform;
    int  _akSerializationVersion;
    id /* block */  _appearanceOverride;
    AKAnnotation * _childAnnotation;
    NSString * _customPlaceholderText;
    BOOL  _editsDisableAppearanceOverride;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _initialDrawingBoundsForAppearanceOverride;
    BOOL  _isDraggingHandle;
    BOOL  _isEdited;
    BOOL  _isEditingText;
    BOOL  _isObservingForAppearance;
    BOOL  _isObservingForIsEdited;
    BOOL  _isReallyObservingForIsEdited;
    BOOL  _isTranslating;
    int  _originalExifOrientation;
    float  _originalModelBaseScaleFactor;
    AKAnnotation * _parentAnnotation;
    BOOL  _shouldUseAppearanceOverride;
    BOOL  _shouldUsePlaceholderText;
    BOOL  _textIsClipped;
    BOOL  _textIsFixedHeight;
    BOOL  _textIsFixedWidth;
}

@property (readonly) NSString *UUID;
@property int akSerializationPlatform;
@property int akSerializationVersion;
@property (copy) id /* block */ appearanceOverride;
@property AKAnnotation *childAnnotation;
@property (copy) NSString *customPlaceholderText;
@property (readonly) NSString *displayName;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawingBounds;
@property BOOL editsDisableAppearanceOverride;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } hitTestBounds;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } initialDrawingBoundsForAppearanceOverride;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } integralDrawingBounds;
@property BOOL isDraggingHandle;
@property BOOL isEdited;
@property BOOL isEditingText;
@property BOOL isTranslating;
@property (readonly) BOOL isUsingAppearanceOverride;
@property (nonatomic) int originalExifOrientation;
@property (nonatomic) float originalModelBaseScaleFactor;
@property AKAnnotation *parentAnnotation;
@property BOOL shouldObserveEdits;
@property BOOL shouldUseAppearanceOverride;
@property BOOL shouldUsePlaceholderText;
@property BOOL textIsClipped;
@property BOOL textIsFixedHeight;
@property BOOL textIsFixedWidth;

+ (id)annotationWithData:(id)arg1;
+ (id)defaultPlaceholderText;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)adjustModelToCompensateForOriginalExif;
- (int)akSerializationPlatform;
- (int)akSerializationVersion;
- (id /* block */)appearanceOverride;
- (id)childAnnotation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPlaceholderText;
- (id)dataRepresentation;
- (void)dealloc;
- (id)displayName;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingBounds;
- (BOOL)editsDisableAppearanceOverride;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(int)arg1 withModelSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialDrawingBoundsForAppearanceOverride;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })integralDrawingBounds;
- (BOOL)isDraggingHandle;
- (BOOL)isEdited;
- (BOOL)isEditingText;
- (BOOL)isTranslating;
- (BOOL)isUsingAppearanceOverride;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)originalExifOrientation;
- (float)originalModelBaseScaleFactor;
- (id)parentAnnotation;
- (void)setAkSerializationPlatform:(int)arg1;
- (void)setAkSerializationVersion:(int)arg1;
- (void)setAppearanceOverride:(id /* block */)arg1;
- (void)setChildAnnotation:(id)arg1;
- (void)setCustomPlaceholderText:(id)arg1;
- (void)setEditsDisableAppearanceOverride:(BOOL)arg1;
- (void)setInitialDrawingBoundsForAppearanceOverride:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsDraggingHandle:(BOOL)arg1;
- (void)setIsEdited:(BOOL)arg1;
- (void)setIsEditingText:(BOOL)arg1;
- (void)setIsTranslating:(BOOL)arg1;
- (void)setOriginalExifOrientation:(int)arg1;
- (void)setOriginalModelBaseScaleFactor:(float)arg1;
- (void)setParentAnnotation:(id)arg1;
- (void)setShouldObserveEdits:(BOOL)arg1;
- (void)setShouldUseAppearanceOverride:(BOOL)arg1;
- (void)setShouldUsePlaceholderText:(BOOL)arg1;
- (void)setTextIsClipped:(BOOL)arg1;
- (void)setTextIsFixedHeight:(BOOL)arg1;
- (void)setTextIsFixedWidth:(BOOL)arg1;
- (BOOL)shouldObserveEdits;
- (BOOL)shouldUseAppearanceOverride;
- (BOOL)shouldUsePlaceholderText;
- (BOOL)textIsClipped;
- (BOOL)textIsFixedHeight;
- (BOOL)textIsFixedWidth;
- (void)translateBy:(struct CGPoint { float x1; float x2; })arg1;

@end