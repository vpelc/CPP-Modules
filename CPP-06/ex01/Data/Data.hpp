#pragma once

class Data
{
	private :
		int		data_int;

	public :
				Data();
				~Data();
				Data(Data &other);

		int		get_data();
		Data	&operator=(Data &other);

};
