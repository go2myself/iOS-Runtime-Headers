/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDate, NSDictionary, NSString;

@interface SSSoftwareUpdate : NSObject {
    NSDictionary *_dictionary;
    NSDate *_installDate;
    int _updateState;
}

@property(readonly) NSString * bundleIdentifier;
@property(copy) NSDate * installDate;
@property(readonly) int parentalControlsRank;
@property(readonly) long long storeItemIdentifier;
@property(readonly) NSDictionary * updateDictionary;
@property int updateState;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)installDate;
- (int)parentalControlsRank;
- (void)setInstallDate:(id)arg1;
- (void)setUpdateState:(int)arg1;
- (long long)storeItemIdentifier;
- (id)updateDictionary;
- (int)updateState;

@end