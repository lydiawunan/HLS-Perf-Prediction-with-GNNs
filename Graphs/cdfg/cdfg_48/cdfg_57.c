#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1064651274
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long p_5, unsigned long p_7,
                       unsigned int p_9[1][5][5], char p_11)
{
  long long v_21;
  unsigned long long v_19;
  unsigned int v_17;
  char v_15;
  unsigned char v_13;
  char v;
  unsigned long long result;
  v_21 = (long long)p_11;
  v_17 = p_9[0][1][0];
  v_15 = (char)22;
  v_13 = (unsigned char)p_9[0][1][2];
  v = (char)-45;
  while (((long)(- v_15) + ! p_5) / (long)((int)(- (! p)) + 605) >= 23164L) {
    v_19 = (unsigned long long)((int)v % 51465);
    v_13 = (unsigned char)((unsigned long long)p_11 % (- v_19 * (unsigned long long)(
                                                       -536816728LL * v_21) + 403ULL));
    v_15 = (char)(! (3628094550U << (v_17 & 31U)) - ~ v_17);
  }
  while_0_break: ;
  if (p_7 != (unsigned long)(! p_9[0][3][1] % (unsigned int)((int)(! p_11) + 506)) + (
             (unsigned long)(- v_13) - (p_7 - (unsigned long)v_13))) 
    result = (unsigned long long)(- (- ((int)p * -56707)));
  else {
    v = (char)(! (p_5 + -211925553L));
    result = (unsigned long long)(((long)v % (~ p_5 + 415L)) * (long)p);
  }
  return result;
}


