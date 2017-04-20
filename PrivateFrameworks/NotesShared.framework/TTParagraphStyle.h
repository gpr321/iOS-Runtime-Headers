/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTParagraphStyle : NSObject <NSCopying, NSMutableCopying, TTModelAttributeComparable> {
    int  _alignment;
    unsigned int  _hints;
    unsigned int  _indent;
    BOOL  _needsListCleanup;
    BOOL  _needsParagraphCleanup;
    unsigned int  _startingItemNumber;
    unsigned int  _style;
    TTTodo * _todo;
    int  _writingDirection;
}

@property (nonatomic) int alignment;
@property (nonatomic, readonly) BOOL canIndent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int hints;
@property (nonatomic) unsigned int indent;
@property (nonatomic, readonly) BOOL isHeader;
@property (nonatomic, readonly) BOOL isList;
@property (nonatomic, readonly) int layoutWritingDirection;
@property (nonatomic) BOOL needsListCleanup;
@property (nonatomic) BOOL needsParagraphCleanup;
@property (nonatomic, readonly) BOOL preferSingleLine;
@property (nonatomic) unsigned int startingItemNumber;
@property (nonatomic) unsigned int style;
@property (readonly) Class superclass;
@property (nonatomic, retain) TTTodo *todo;
@property (nonatomic, readonly) NSUUID *trackingUUID;
@property (nonatomic, readonly) BOOL uniqueToLine;
@property (nonatomic, readonly) BOOL wantsFollowingNewLine;
@property (nonatomic) int writingDirection;

+ (id)defaultParagraphStyle;
+ (int)paragraphStyleAlignmentForTextAlignment:(int)arg1;
+ (id)paragraphStyleNamed:(unsigned int)arg1;
+ (int)textAlignmentForParagraphStyleAlignment:(int)arg1;

- (void).cxx_destruct;
- (int)alignment;
- (BOOL)canIndent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (unsigned int)hints;
- (unsigned int)indent;
- (id)init;
- (id)initWithArchive:(const struct ParagraphStyle { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; int x7; int x8; struct Todo {} *x9; unsigned int x10; unsigned int x11; }*)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToModelComparable:(id)arg1;
- (BOOL)isEqualToModelParagraphStyle:(id)arg1;
- (BOOL)isEqualToParagraphStyle:(id)arg1;
- (BOOL)isHeader;
- (BOOL)isList;
- (BOOL)isUnknownStyle;
- (int)layoutWritingDirection;
- (id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned int)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)needsListCleanup;
- (BOOL)needsParagraphCleanup;
- (BOOL)preferSingleLine;
- (void)saveToArchive:(struct ParagraphStyle { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; int x7; int x8; struct Todo {} *x9; unsigned int x10; unsigned int x11; }*)arg1;
- (id)serialize;
- (void)setAlignment:(int)arg1;
- (void)setHints:(unsigned int)arg1;
- (void)setIndent:(unsigned int)arg1;
- (void)setNeedsListCleanup:(BOOL)arg1;
- (void)setNeedsParagraphCleanup:(BOOL)arg1;
- (void)setStartingItemNumber:(unsigned int)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTodo:(id)arg1;
- (void)setWritingDirection:(int)arg1;
- (unsigned int)startingItemNumber;
- (unsigned int)style;
- (id)todo;
- (id)trackingUUID;
- (BOOL)uniqueToLine;
- (BOOL)wantsFollowingNewLine;
- (int)writingDirection;

@end