#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531587390
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned long p_7, unsigned char p_11, long p_13[5],
         signed char p_15)
{
  unsigned short v_17;
  long long v_9;
  signed char v_4;
  double v;
  char result;
  v_17 = (unsigned short)1714;
  v_4 = (signed char)p_11;
  result = (char)p_15;
  result = (char)((long long)(~ (~ ((unsigned int)v_4 - 459891618U))) - 
                  (long long)(- ((int)result | (int)p_11)) * -393139656LL);
  v = (double)(((unsigned long)(p_13[2] ^ (long)(~ p_15)) - 2UL / (unsigned long)(
                                                            (int)v_4 + 54)) + (unsigned long)(
               (int)v_4 + ((int)((unsigned short)(p * (float)result)) + (int)(- v_17))));
  v_9 = (long long)(-1 << ((- (p_7 ^ 873144269UL) + (unsigned long)p_11) & 7UL));
  result = (char)((long long)((int)(v - -25794.) / ((int)((signed char)-561.332946777f) % (
                                                    (int)v_4 + 795) + 188) << 5) & 
                  (long long)(- (- p)) % (- ((long long)p_7 % (v_9 + 548LL)) + 742LL));
  return result;
}


