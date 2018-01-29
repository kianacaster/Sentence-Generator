#include <iostream>
#include <string>

using namespace std;
string generateSentence()
{
    srand(time(0)); // Seed the random function
    const char* nouns[10] = {"cat", "dog", "table", "car", "gun", "person", "man", "woman", "TV", "printer"}; // List of nouns
    const char* verbs[10] = {"laughed", "ran", "ate", "cooked", "shot", "fought", "walked", "burned", "entered", "left"}; // List of verbs
    const char* adjectives[10] = {"big","stupid","hard","dangerous","nice","threatening","ignorant","short","loud","boring"}; // List of adjectives
    const char* adverbs[10] = {"slowly","strangely","randomly","unexpectedly","happily","seductively","amazingly","quickly","arrogantly","violently"}; // List of adverbs

    // Returns a sentence that combines a random index from each array into a final sentence
    return std::string("The ") + adjectives[rand() % sizeof(adjectives-1)] + std::string(" ") + nouns[rand() % sizeof(nouns-1)] 
    + std::string(" ") + verbs[rand() % sizeof(verbs-1)] + std::string(" ") + adverbs[rand() % sizeof(adverbs-1)] + std::string(".");   
}

int main()
{
  cout << generateSentence();
  return 0;
}
