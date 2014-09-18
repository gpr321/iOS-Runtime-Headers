/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, _UIScreenEdgePanRecognizer;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {
    unsigned long long _edges;
    _UIScreenEdgePanRecognizer *_recognizer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property unsigned long long edges;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (double)_edgeRegionSize;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (void)dealloc;
- (unsigned long long)edges;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isRequiringLongPress;
- (void)reset;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end