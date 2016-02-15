#pragma once

#define HOUR_COUNT 24
#define HOUR_NAME "hour"
#define MINUTE_COUNT 60
#define MINUTE_NAME "minute"
#define SECOND_COUNT 60
#define SECOND_NAME "second"

class daytime
{
private:
	unsigned short h, m, s;
	void read_component_from_console(const char* name, unsigned short exclusive_max, unsigned short &component, bool ignore_constrict);

public:
	daytime();
	daytime(unsigned short hours, unsigned short minutes, unsigned short seconds);
	void from_components(unsigned short hours, unsigned short minutes, unsigned short seconds);
	inline unsigned short hour() { return h; }
	inline unsigned short minute() { return m; }
	inline unsigned short second() { return s; }
	void read_from_console(bool ignore_constricts);
	void write_to_console_military();
	void write_to_console_ampm();
	bool valid();
	void force_validate();

	~daytime();
};

