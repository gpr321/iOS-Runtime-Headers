/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class LibraryMessage;

@interface IMAPAttachmentsDownload : IMAPCompoundDownload {
    LibraryMessage *_message;
}

- (void)dealloc;
- (id)initWithLibraryMessage:(id)arg1;
- (id)message;
- (void)saveCompletedDownloads;

@end