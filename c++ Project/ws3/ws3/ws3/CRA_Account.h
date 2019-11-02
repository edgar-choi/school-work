#pragma once
#ifndef SICT_CRA_ACCOUNT_H
#define SICT_CRA_ACCOUNT_H
// predefine some values
#define max_name_length 40
#define min_sin 100000000
#define max_sin 999999999
namespace sict {
	class CRA_Account {
		//Class attributes
		char familyname[max_name_length];
		char givenname[max_name_length];
		char SIN[];

		void set(const char* familyName, const char* givenName, int sin);
		bool isEmpty() const;
		void display() const;
	};
}
#endif