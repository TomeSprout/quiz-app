#include <iostream>

#include <string>

int Guess;
int Total;

class Question
{
	private:
		std::string Question_Text;
		std::string Answer_1;
		std::string Answer_2;
		std::string Answer_3;
		std::string Answer_4;
		
		int Correct_Answer;
		int Question_Score;
	
	public:
		void setValues (std::string, std::string, std::string, std::string, std::string, int, int);
		void askQuestion ();
}		

int main ()
{
	std::cout << "Press Enter to start the quiz..." << std::endl;
	std::cin.get;
	
	std::string Name;
	int Age;
	
	std::string Response;
	std::cout << "Are you ready to take the Quiz " << Name << "? Yes / No." << std::endl;
	
	if (Response == "yes")
	{
		std::cout << std::endl 
			 << "Ok, Good Luck!" 
			 << endl 
			 << endl;
	}
	else
	{
		std::cout << "Ok, Goodbye!" << std::endl;
		return 0;
	}
	
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	q1.setValues("Question 1 text?",
				 "Answer 1.1 text",
				 "Answer 1.2 text",
				 "Answer 1.3 text",
				 "Answer 1.4 text",
				 3,
				 10);
	
	q2.setValues("Question 2 text?",
				 "Answer 2.1 text",
				 "Answer 2.2 text",
				 "Answer 2.3 text",
				 "Answer 2.4 text",
				 2,
				 10);
	
	// INSERT MORE QUESTIONS HERE
	
	q1.AskQuestion();
	q2.AskQuestion();
	q3.AskQuestion();
	q4.AskQuestion();
	q5.AskQuestion();
	q6.AskQuestion();
	q7.AskQuestion();
	q8.AskQuestion();
	q9.AskQuestion();
	q10.AskQuestion();
	
	cout << "Your Total Score is " << Total << " out of 100" << endl << endl;
	
	if (Total >= 70) {cout << "You passed" << endl;}
	else {cout << "You failed" << endl;}
	
	return 0;
}

void (Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

void Question::askQuestion ()
{
	cout << endl 
		 << Question_Text << endl
		 << "1. " << Answer_1 << endl
		 << "2. " << Answer_2 << endl
		 << "3. " << Answer_3 << endl
		 << "4. " << Answer_4 << endl
		 << endl;
		 
	cout << "What is your answer?" << endl;
	cin >> Guess;
	
	if (Guess == Correct_Answer)
	{
		cout << endl
			 << "Correct." 
			 << endl;
			 
		Total += Question_Score;
		
		cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << endl << endl;
	}
}