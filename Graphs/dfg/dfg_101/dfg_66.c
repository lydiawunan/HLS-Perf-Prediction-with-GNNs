#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1022774655
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, double p_4, unsigned short p_6[3][1][1],
         unsigned int p_11[2][1][4], unsigned long long p_17)
{
  long v_19;
  long v_15;
  short v_13;
  long v_9;
  unsigned int v;
  char result;
  v_19 = (long)p_4;
  v_15 = (long)p_6[1][0][0];
  v_13 = (short)(- p_6[0][0][0]);
  v = 3535616131U;
  v_9 = (long)((unsigned long long)(p_11[1][0][3] + (unsigned int)((int)v_13 + 50621)) / (
               ((unsigned long long)(v_15 * (long)9852086426.39) ^ ! p_17) + 988ULL) - 
               (0 - (unsigned long long)v_19) * (unsigned long long)v_19);
  result = (char)((p % ((unsigned long long)(p_4 - (double)p_6[0][0][0]) + 451ULL)) % (
                  (unsigned long long)(15U + v) % (((unsigned long long)v_9 ^ 18446744073709525006ULL) + 334ULL) + 887ULL) - p);
  return result;
}


