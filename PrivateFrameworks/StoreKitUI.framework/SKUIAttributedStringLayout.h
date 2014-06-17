/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSAttributedString, NSStringDrawingContext;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {
    NSAttributedString *_attributedString;
    struct CGSize { 
        double width; 
        double height; 
    } _boundingSize;
    NSStringDrawingContext *_context;
}

@property(readonly) NSAttributedString * attributedString;
@property(readonly) double baselineOffset;
@property(readonly) struct CGSize { double x1; double x2; } boundingSize;
@property(readonly) long long numberOfLines;
@property(readonly) NSStringDrawingContext * stringDrawingContext;


- (id)stringDrawingContext;
- (struct CGSize { double x1; double x2; })boundingSize;
- (id)initWithLayoutRequest:(id)arg1;
- (double)baselineOffset;
- (id)attributedString;
- (void).cxx_destruct;
- (long long)numberOfLines;

@end