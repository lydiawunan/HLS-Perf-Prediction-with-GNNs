#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160171559
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, double p_5, unsigned long long p_13[4][1],
         long long p_15, unsigned long long p_19)
{
  unsigned long long v_23;
  double v_21;
  float v_17;
  unsigned int v_11;
  unsigned long long v_9;
  signed char v_7;
  unsigned long long v;
  char result;
  v_23 = p_13[2][0];
  v_21 = 7416929131.82;
  v_17 = (float)p_19;
  v_11 = (unsigned int)p_15;
  v_9 = p_13[2][0];
  v_7 = (signed char)-94;
  v = (unsigned long long)p;
  result = (char)p_19;
  while ((unsigned long long)((int)(p_5 + (double)(- v_11)) + (((int)result ^ (int)p) + -122)) <= v) {
    v_23 = (double)v_23 - v_21 * -4464360564.16;
    v_9 = (unsigned long long)(~ (7045U | (3840406421U + (unsigned int)v_7)));
    v = (unsigned long long)((long long)(((double)v_17 * p_5) / 599506156.) & p_15);
    result = (char)((long)((double)(p_15 - -119LL) + p_5 * (double)p) % 1422L);
  }
  while_0_break: ;
  if ((18446744072863849021ULL / (v / (p_13[3][0] + 756ULL) + 13ULL) | (
       p_13[2][0] / (unsigned long long)((int)result + 844) + v_9 % (unsigned long long)(
                                                              p_15 + 569LL))) == 
      (unsigned long long)v_17 + ! ((unsigned long long)p_5 + p_19)) 
    result = (char)p;
  else {
    v_7 = (signed char)(v_9 * ((unsigned long long)(4294965290U - v_11) % (
                               ((unsigned long long)result + 18446744073518900183ULL) + 646ULL)));
    v = (unsigned long long)(((double)((int)v_7 ^ 23295) * 1052333989.27) * 60343.);
    result = (char)(18446744073709551615ULL * ((v ^ 18446744073709534138ULL) * (unsigned long long)(
                                               71 * (int)((unsigned char)p_5))));
  }
  return result;
}


