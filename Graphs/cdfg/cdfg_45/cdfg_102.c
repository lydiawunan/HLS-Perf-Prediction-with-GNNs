#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 136062170
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned long p_5, unsigned long p_7, short p_9,
         long p_13)
{
  int v_27;
  short v_25;
  unsigned short v_23;
  double v_21;
  unsigned long v_19;
  float v_17;
  long long v_15;
  unsigned long long v_11;
  unsigned int v;
  char result;
  v_27 = (int)p_9;
  v_23 = (unsigned short)41212;
  v_21 = (double)p_13;
  v_17 = (float)p;
  v_11 = (unsigned long long)p_5;
  v = (unsigned int)p_7;
  if ((unsigned long long)(! p_5 * (unsigned long)p) <= ((unsigned long long)(
                                                         v_27 * -28996) + 694548414ULL) / (
                                                        ((unsigned long long)(
                                                         45297 ^ (int)p) + v_11) + 799ULL)) {
    v_21 = (double)(~ ((unsigned long)((long)v_23 - p_13) % 3652922397UL));
    v_17 = (float)((double)p_7 / (v_21 + 866.));
    v_19 = (unsigned long)v_17;
  }
  else {
    v_11 = (unsigned long long)(~ (3876007675UL + (unsigned long)p_13));
    v_25 = (short)(300UL * - (p_7 - 29784UL));
    v_19 = (unsigned long)((double)((774394911ULL - v_11) * (unsigned long long)(
                                    p_5 + 3UL)) + ((double)(v - (unsigned int)v_25) + 
                                                   v_21 * (double)p_13));
  }
  if ((unsigned long)v_17 <= ((v_19 | p_5) - 4294967262UL) % (p_5 + 463UL)) {
    v_11 = 18446744073709551581ULL / (62708ULL / (unsigned long long)(
                                      ((unsigned long)p_13 - p_5) + 384UL) + 269ULL);
    v = (unsigned int)((unsigned long long)(p_7 % (unsigned long)((int)p_9 + 837)) - - (
                       111084731ULL ^ v_11));
    result = (char)(- (((double)v / -5137595549.03) * (double)((unsigned long)p / (
                                                               p_5 + 433UL))));
  }
  else {
    v_15 = (long long)(245144775 | (int)p);
    result = (char)v_15;
  }
  return result;
}


