//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (MTDates)
+ (void)mt_reset;
+ (id)mt_components;
+ (id)mt_calendar;
+ (void)mt_prepareDefaults;
+ (int)mt_maxValueForUnit:(unsigned int)arg1;
+ (int)mt_minValueForUnit:(unsigned int)arg1;
+ (id)mt_datesCollectionFromDate:(id)arg1 untilDate:(id)arg2;
+ (void)mt_setFormatterTimeStyle:(unsigned int)arg1;
+ (void)mt_setFormatterDateStyle:(unsigned int)arg1;
+ (id)mt_veryShortMonthlySymbols;
+ (id)mt_monthlySymbols;
+ (id)mt_shortMonthlySymbols;
+ (id)mt_veryShortWeekdaySymbols;
+ (id)mt_weekdaySymbols;
+ (id)mt_shortWeekdaySymbols;
+ (id)mt_endOfTomorrow;
+ (id)mt_endOfYesterday;
+ (id)mt_endOfToday;
+ (id)mt_startOfTomorrow;
+ (id)mt_startOfYesterday;
+ (id)mt_startOfToday;
+ (id)mt_dateFromComponents:(id)arg1;
+ (id)mt_dateFromYear:(unsigned int)arg1 week:(unsigned int)arg2 weekday:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6;
+ (id)mt_dateFromYear:(unsigned int)arg1 week:(unsigned int)arg2 weekday:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5;
+ (id)mt_dateFromYear:(unsigned int)arg1 week:(unsigned int)arg2 weekday:(unsigned int)arg3;
+ (id)mt_dateFromYear:(unsigned int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6;
+ (id)mt_dateFromYear:(unsigned int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5;
+ (id)mt_dateFromYear:(unsigned int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3;
+ (id)mt_dateFromString:(id)arg1 usingFormat:(id)arg2;
+ (id)mt_dateFromISOString:(id)arg1;
+ (void)mt_setWeekNumberingSystem:(int)arg1;
+ (void)mt_setFirstDayOfWeek:(unsigned int)arg1;
+ (void)mt_setTimeZone:(id)arg1;
+ (void)mt_setLocale:(id)arg1;
+ (void)mt_setCalendarIdentifier:(id)arg1;
+ (id)mt_sharedFormatter;
- (id)mt_inTimeZone:(id)arg1;
- (unsigned int)mt_daysInNextMonth;
- (unsigned int)mt_daysInPreviousMonth;
- (unsigned int)mt_daysInCurrentMonth;
- (unsigned int)mt_weekdayStartOfCurrentMonth;
- (BOOL)mt_isStartOfAnHour;
- (BOOL)mt_isInAM;
- (id)mt_hoursInCurrentDayAsDatesCollection;
- (id)mt_stringFromDateWithGreatestComponentsUntilDate:(id)arg1;
- (id)mt_stringFromDateWithGreatestComponentsForSecondsPassed:(double)arg1;
- (id)mt_stringFromDateWithISODateTime;
- (id)mt_stringFromDateWithFormat:(id)arg1 localized:(BOOL)arg2;
- (id)mt_stringFromDateWithFullWeekdayTitle;
- (id)mt_stringFromDateWithShortWeekdayTitle;
- (id)mt_stringFromDateWithAMPMSymbol;
- (id)mt_stringFromDateWithFullMonth;
- (id)mt_stringFromDateWithShortMonth;
- (id)mt_stringFromDateWithHourAndMinuteFormat:(int)arg1;
- (id)mt_stringValueWithDateStyle:(unsigned int)arg1 timeStyle:(unsigned int)arg2;
- (id)mt_stringValue;
- (BOOL)mt_isBetweenDate:(id)arg1 andDate:(id)arg2;
- (BOOL)mt_isWithinSameHour:(id)arg1;
- (BOOL)mt_isWithinSameDay:(id)arg1;
- (BOOL)mt_isWithinSameWeek:(id)arg1;
- (BOOL)mt_isWithinSameMonth:(id)arg1;
- (BOOL)mt_isWithinSameYear:(id)arg1;
- (BOOL)mt_isOnOrBefore:(id)arg1;
- (BOOL)mt_isOnOrAfter:(id)arg1;
- (BOOL)mt_isBefore:(id)arg1;
- (BOOL)mt_isAfter:(id)arg1;
- (int)mt_secondsUntilDate:(id)arg1;
- (int)mt_secondsSinceDate:(id)arg1;
- (id)mt_dateSecondsAfter:(unsigned int)arg1;
- (id)mt_dateSecondsBefore:(unsigned int)arg1;
- (id)mt_oneSecondNext;
- (id)mt_oneSecondPrevious;
- (id)mt_startOfNextSecond;
- (id)mt_startOfPreviousSecond;
- (int)mt_minutesUntilDate:(id)arg1;
- (int)mt_minutesSinceDate:(id)arg1;
- (id)mt_dateMinutesAfter:(unsigned int)arg1;
- (id)mt_dateMinutesBefore:(unsigned int)arg1;
- (id)mt_oneMinuteNext;
- (id)mt_oneMinutePrevious;
- (id)mt_endOfNextMinute;
- (id)mt_endOfCurrentMinute;
- (id)mt_endOfPreviousMinute;
- (id)mt_startOfNextMinute;
- (id)mt_startOfCurrentMinute;
- (id)mt_startOfPreviousMinute;
- (int)mt_hoursUntilDate:(id)arg1;
- (int)mt_hoursSinceDate:(id)arg1;
- (id)mt_dateHoursAfter:(unsigned int)arg1;
- (id)mt_dateHoursBefore:(unsigned int)arg1;
- (id)mt_oneHourNext;
- (id)mt_oneHourPrevious;
- (id)mt_endOfNextHour;
- (id)mt_endOfCurrentHour;
- (id)mt_endOfPreviousHour;
- (id)mt_startOfNextHour;
- (id)mt_startOfCurrentHour;
- (id)mt_startOfPreviousHour;
- (int)mt_daysUntilDate:(id)arg1;
- (int)mt_daysSinceDate:(id)arg1;
- (id)mt_dateDaysAfter:(unsigned int)arg1;
- (id)mt_dateDaysBefore:(unsigned int)arg1;
- (id)mt_oneDayNext;
- (id)mt_oneDayPrevious;
- (id)mt_endOfNextDay;
- (id)mt_endOfCurrentDay;
- (id)mt_endOfPreviousDay;
- (id)mt_startOfNextDay;
- (id)mt_startOfCurrentDay;
- (id)mt_startOfPreviousDay;
- (int)mt_weeksUntilDate:(id)arg1;
- (int)mt_weeksSinceDate:(id)arg1;
- (id)mt_dateWeeksAfter:(unsigned int)arg1;
- (id)mt_dateWeeksBefore:(unsigned int)arg1;
- (id)mt_oneWeekNext;
- (id)mt_oneWeekPrevious;
- (id)mt_endOfNextWeek;
- (id)mt_endOfCurrentWeek;
- (id)mt_endOfPreviousWeek;
- (id)mt_startOfNextWeek;
- (id)mt_startOfCurrentWeek;
- (id)mt_startOfPreviousWeek;
- (int)mt_monthsUntilDate:(id)arg1;
- (int)mt_monthsSinceDate:(id)arg1;
- (id)mt_dateMonthsAfter:(unsigned int)arg1;
- (id)mt_dateMonthsBefore:(unsigned int)arg1;
- (id)mt_oneMonthNext;
- (id)mt_oneMonthPrevious;
- (id)mt_endOfNextMonth;
- (id)mt_endOfCurrentMonth;
- (id)mt_endOfPreviousMonth;
- (id)mt_startOfNextMonth;
- (id)mt_startOfCurrentMonth;
- (id)mt_startOfPreviousMonth;
- (int)mt_yearsUntilDate:(id)arg1;
- (int)mt_yearsSinceDate:(id)arg1;
- (id)mt_dateYearsAfter:(unsigned int)arg1;
- (id)mt_dateYearsBefore:(unsigned int)arg1;
- (id)mt_oneYearNext;
- (id)mt_oneYearPrevious;
- (id)mt_endOfNextYear;
- (id)mt_endOfCurrentYear;
- (id)mt_endOfPreviousYear;
- (id)mt_startOfNextYear;
- (id)mt_startOfCurrentYear;
- (id)mt_startOfPreviousYear;
- (id)mt_components;
- (double)mt_secondsIntoDay;
- (unsigned int)mt_secondOfMinute;
- (unsigned int)mt_minuteOfHour;
- (unsigned int)mt_hourOfDay;
- (unsigned int)mt_dayOfMonth;
- (unsigned int)mt_monthOfYear;
- (unsigned int)mt_weekdayOfWeek;
- (unsigned int)mt_weekOfMonth;
- (unsigned int)mt_dayOfYear;
- (unsigned int)mt_weekOfYear;
- (unsigned int)mt_year;
- (id)mt_dateByAddingYears:(int)arg1 months:(int)arg2 weeks:(int)arg3 days:(int)arg4 hours:(int)arg5 minutes:(int)arg6 seconds:(int)arg7;
@end

