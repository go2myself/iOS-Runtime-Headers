/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageTable;

@interface PLImageTableSegment : NSObject {
    BOOL _dying;
    PLImageTable *_imageTable;
    unsigned int _index;
    unsigned int _length;
    void *_ptr;
}

- (void*)bytes;
- (void)dealloc;
- (id)initWithImageTable:(id)arg1 index:(unsigned long)arg2 length:(unsigned long)arg3 idealAddress:(void*)arg4;
- (id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long)arg3;
- (void)release;

@end