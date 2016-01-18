#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSMergeField.h"
#import "DSErrorDetails.h"


@protocol DSApprove
@end

@interface DSApprove : DSObject

/* Specifies the text displayed in the tab. [optional]
 */
@property(nonatomic) NSString* buttonText;
/* Width of the tab in pixels. [optional]
 */
@property(nonatomic) NSNumber* width;
/* Height of the tab in pixels. [optional]
 */
@property(nonatomic) NSNumber* height;
/* The label string associated with the tab. [optional]
 */
@property(nonatomic) NSString* tabLabel;
/* The font to be used for the tab value. Supported Fonts: Arial, Arial, ArialNarrow, Calibri, CourierNew, Garamond, Georgia, Helvetica,   LucidaConsole, Tahoma, TimesNewRoman, Trebuchet, Verdana, MSGothic, MSMincho, Default. [optional]
 */
@property(nonatomic) NSString* font;
/* When set to **true**, the information in the tab is bold. [optional]
 */
@property(nonatomic) NSString* bold;
/* When set to **true**, the information in the tab is italic. [optional]
 */
@property(nonatomic) NSString* italic;
/* When set to **true**, the information in the tab is underlined. [optional]
 */
@property(nonatomic) NSString* underline;
/* The font color used for the information in the tab.\n\nPossible values are: Black, BrightBlue, BrightRed, DarkGreen, DarkRed, Gold, Green, NavyBlue, Purple, or White. [optional]
 */
@property(nonatomic) NSString* fontColor;
/* The font size used for the information in the tab.\n\nPossible values are: Size7, Size8, Size9, Size10, Size11, Size12, Size14, Size16, Size18, Size20, Size22, Size24, Size26, Size28, Size36, Size48, or Size72. [optional]
 */
@property(nonatomic) NSString* fontSize;
/* Specifies the document ID number that the tab is placed on. This must refer to an existing Document's ID attribute. [optional]
 */
@property(nonatomic) NSString* documentId;
/* Unique for the recipient. It is used by the tab element to indicate which recipient is to sign the Document. [optional]
 */
@property(nonatomic) NSString* recipientId;
/* Specifies the page number on which the tab is located. [optional]
 */
@property(nonatomic) NSString* pageNumber;
/* This indicates the horizontal offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* xPosition;
/* This indicates the vertical offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* yPosition;
/* Anchor text information for a radio button. [optional]
 */
@property(nonatomic) NSString* anchorString;
/* Specifies the X axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorXOffset;
/* Specifies the Y axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorYOffset;
/* Specifies units of the X and Y offset. Units could be pixels, millimeters, centimeters, or inches. [optional]
 */
@property(nonatomic) NSString* anchorUnits;
/* When set to **true**, this tab is ignored if anchorString is not found in the document. [optional]
 */
@property(nonatomic) NSString* anchorIgnoreIfNotPresent;
/* Reserved: [optional]
 */
@property(nonatomic) NSString* anchorCaseSensitive;
/* Reserved: [optional]
 */
@property(nonatomic) NSString* anchorMatchWholeWord;
/* Reserved: [optional]
 */
@property(nonatomic) NSString* anchorHorizontalAlignment;
/* The unique identifier for the tab. The tabid can be retrieved with the [ML:GET call]. [optional]
 */
@property(nonatomic) NSString* tabId;
/* When set to **true**, the sender cannot change any attributes of the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateLocked;
/* When set to **true**, the sender may not remove the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateRequired;
/* For conditional fields this is the TabLabel of the parent tab that controls this tab's visibility. [optional]
 */
@property(nonatomic) NSString* conditionalParentLabel;
/* For conditional fields, this is the value of the parent tab that controls the tab's visibility.\n\nIf the parent tab is a Checkbox, Radio button, Optional Signature, or Optional Initial use \"on\" as the value to show that the parent tab is active. [optional]
 */
@property(nonatomic) NSString* conditionalParentValue;
/* The DocuSign generated custom tab ID for the custom tab to be applied. This can only be used when adding new tabs for a recipient. When used, the new tab inherits all the custom tab properties. [optional]
 */
@property(nonatomic) NSString* customTabId;

@property(nonatomic) DSMergeField* mergeField;
/* Indicates the envelope status. Valid values are:\n\n* sent - The envelope is sent to the recipients. \n* created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;

@property(nonatomic) DSErrorDetails* errorDetails;

@end
