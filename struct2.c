#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string candidate;
    int votes;
} candidate;

candidate get_candidate(void);

int main(void)
{
    candidate  new_candidate = get_candidate();
    // Print the output
    printf("Candidate named %s has %i votes.\n", new_candidate.candidate, new_candidate.votes);
}

candidate get_candidate(void)
{
    candidate new_candidate;
    new_candidate.candidate = get_string("Name: ");
    new_candidate.votes = get_int("Votes: ");

    return new_candidate;
}
