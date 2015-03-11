/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {
    NSData *_data;
    NSData *_encryptedData;
}

@property(copy) NSData * data;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSData * encryptedData;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_prettyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithEncryptedData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setData:(id)arg1;
- (void)setEncryptedData:(id)arg1;

@end