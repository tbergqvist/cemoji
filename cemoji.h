#define 👍 true;
#define 👎 false;
#define 👆 continue;
#define 👈 return
#define 🤔(STATEMENT) if(STATEMENT)
#define 👈🤔(STATEMENT, RETURN) if(STATEMENT) { return RETURN; }
#define 🟰 ==
#define 🖊️🟢(X) std::cout << X;
#define 🖊️(X) std::cout << X << std::endl;
#define 🤝(X, Y, Z) X ? Y : Z

#define 🤷 auto
#define 🚀 void
#define 🦠 bool
#define 🐭 char
#define 🐈 int
#define 🏠 🐈 main()
#define 🐍 std::string
#define 🚂(NAME, TYPE, SIZE, INIT) TYPE NAME[SIZE]; \
	💾(NAME, INIT);

#define 🫴(X) sizeof(X)
#define 💾(X, INIT) memset(X, INIT, 🫴(X)) 

#define 💥(X, MIN, MAX) (X < MIN || X > MAX)

#define 🦀(BODY) [&](){ BODY }()

#define 👉🎁(FIND, X) (std::find(std::begin(X), std::end(X), FIND) == std::end(X))

#define 🤪 while(true)
#define 🤣(IDENTIFIER, LIMIT) for (int IDENTIFIER = 0; IDENTIFIER < LIMIT; IDENTIFIER++)

#define 📝(TYPE) 🦀(TYPE __secret__;  \
std::cin >> __secret__; \
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); \
	std::cin.clear(); \
	return __secret__;)