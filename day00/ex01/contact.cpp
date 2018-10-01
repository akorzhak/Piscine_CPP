#include "phone_book.hpp"

class Contact
{
	private:
		std::string	firstName,
					lastName,
					nickname,
					login,
					post,
					email,
					phone,
					meal,
					color,
					secret;
		int			birthday;

	public:
		void	setFirstName(string firstName)
		{
			this.firstName = firstName;
		}

		string	getFirstName(void)
		{
			return this.firstName;
		}

		void	setLastName(string lastName)
		{
			this.lastName = lastName;
		}

		string	getLastName(void)
		{
			return this.lastName;
		}

		void	setNickname(string nickname)
		{
			this.nickname = nickname;
		}

		string	getNickname(void)
		{
			return this.nickname;
		}

		void	setLogin(string login)
		{
			this.login = login;
		}

		string	getLogin(void)
		{
			return this.login;
		}

		void	setPost(string post)
		{
			this.post = post;
		}

		string	getPost(void)
		{
			return this.post;
		}

		void	setEmail(string email)
		{
			this.email = email;
		}

		string	getEmail(void)
		{
			return this.email;
		}

		void	setPhone(string phone)
		{
			this.phone = phone;
		}

		string	getPhone(void)
		{
			return this.phone;
		}

		void	setMeal(string meal)
		{
			this.meal = meal;
		}

		string	getMeal(void)
		{
			return this.meal;
		}

		void	setColor(string color)
		{
			this.color = color;
		}

		string	getColor(void)
		{
			return this.color;
		}

		void	setSecret(string secret)
		{
			this.secret = secret;
		}

		string	getSecret(void)
		{
			return this.secret;
		}

		void	setBirthday(string birthday)
		{
			this.birthday = birthday;
		}

		string	getBirthday(void)
		{
			return this.birthday;
		}
};