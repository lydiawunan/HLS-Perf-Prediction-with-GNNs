//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 779992089
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, char p_7[3][2][5], signed char p_11,
                   int p_15[2][4])
{
  unsigned int v_17;
  char v_13;
  unsigned long long v_9;
  char v_5;
  signed char v;
  unsigned short result;
  v_13 = (char)-22;
  v = (signed char)123;
  v_17 = (unsigned int)(-8122UL);
  v_9 = (unsigned long long)((unsigned int)(- ((int)p_11 * -28178) - (int)(~ v_13)) + 
                             (unsigned int)(! p_15[1][2]) * ! (- v_17));
  v_5 = (char)(0 / (long)((int)(! p_11) + 1021));
  result = (unsigned short)((unsigned long long)(! ((long)v / 1543L - (long)(
                                                    2.29393875146e+37f - (float)p))) - - (
                            (unsigned long long)((int)p + (int)v_5) / (
                            (unsigned long long)p_7[1][0][1] % (v_9 + 343ULL) + 479ULL)));
  return result;
}


