//
// Created by <a href="mailto:wentong@taobao.com">文通</a> on 12-12-8 下午1:59.
//


#import <Foundation/Foundation.h>

typedef struct {
    int a;
    char *b;
    char *c;
} __struct;

typedef union {
    int a;
    char *b;
} __union;

@interface TBMBFake : NSObject

- (void)requestChar:(char)_char
       UnsignedChar:(unsigned char)_unsignedChar
               Bool:(bool)_bool
             Double:(double)_double
                Int:(int)_int
              Float:(float)_float
               Long:(long)_long
       UnsignedLong:(unsigned long)_unsignedLong
   UnsignedLongLong:(unsigned long long)_unsignedLongLong
              Short:(short)_short
      UnsignedShort:(unsigned short)_unsignedShort
             Struct:(__struct)_struct
           Unsigned:(unsigned)_unsigned
               IntP:(int *)_intP
              Block:(void (^)())_block
              CharP:(char *)_charP
              Array:(int [])_array
              Point:(__struct *)_point
              Class:(Class)_class
            Selecor:(SEL)_sel
                Any:(void *)_any
                 Id:(id)_id


;
@end