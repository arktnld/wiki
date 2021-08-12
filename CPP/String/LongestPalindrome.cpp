#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int longest_palindrome(const std::string &s)
{
	if (s.length() == 1) return 1;
	if (s.length() == 0) return 0;
	int p = 0;
	for (unsigned int i = 0; i <= s.length(); ++i) {
		for (unsigned int j = 0; j <= s.length(); ++j) {
			string b = s.substr(j,i+j);
			string c = b;
			reverse(b.begin(), b.end());
			if (b == c && b.length() > p) p = b.length();
		}

	}
	cout << s << " = " << p << endl;
	return p;
}

int main(int argc, char *argv[])
{
	/* longest_palindrome("a"); // 1 */
	/* longest_palindrome("aa"); // 2 */
	/* longest_palindrome("baa"); // 2 */
	/* longest_palindrome("aab"); // 2 */
	/* longest_palindrome("zyabyz"); // 6, false */
	/* longest_palindrome("baabcd"); // 4 */
	/* longest_palindrome("baablkj12345432133d"); // 9 */
	longest_palindrome("FourscoreandsevenyearsagoourfaathersbroughtforthonthiscontainentanewnationconceivedinzLibertyanddedicatedtothepropositionthatallmenarecreatedequalNowweareengagedinagreahtcivilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth"); // 1
	// 7
	return 0;
}

