/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject  {
    NSMutableSet *_passViews;
}


- (void)enqueueReusablePassView:(id)arg1;
- (id)dequeueReusablePassView;
- (id)initWithCount:(unsigned int)arg1;
- (void)dealloc;

@end