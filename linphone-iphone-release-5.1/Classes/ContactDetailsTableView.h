/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of linphone-iphone 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>

#import "Contact.h"
#import "LinphoneUI/UIToggleButton.h"

typedef enum _ContactSections {
	ContactSections_None = 0, // first section is empty because we cannot set header for first section
	ContactSections_FirstName,
	ContactSections_LastName,
	ContactSections_Organization,
	ContactSections_Sip,
	ContactSections_Number,
	ContactSections_Email,
	ContactSections_MAX
} ContactSections;

@interface ContactDetailsTableView : UITableViewController <UITextFieldDelegate>

@property(strong, nonatomic) Contact *contact;
@property(weak, nonatomic) IBOutlet UIToggleButton *editButton;

- (void)addPhoneField:(NSString *)number;
- (void)addSipField:(NSString *)address;
- (void)addEmailField:(NSString *)address;
- (void)setContact:(Contact *)contact;
@property (weak, nonatomic) UIView *waitView;

@end
