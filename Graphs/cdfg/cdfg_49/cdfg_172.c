#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 441277410
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, short p_9, char p_11, long long p_13,
                unsigned long long p_15)
{
  signed char v_31;
  int v_29;
  char v_27;
  unsigned long v_25;
  short v_23;
  char v_21;
  char v_19;
  long long v_17;
  long long v_6;
  char v_4;
  short v;
  signed char result;
  v_31 = (signed char)p_11;
  v_29 = (int)p;
  v_27 = (char)48;
  v_25 = 4294957098UL;
  v_21 = (char)-123;
  v_19 = (char)70;
  v_17 = 301533725LL;
  v_4 = (char)p_15;
  v = (short)25194;
  if (16LL * (-121776777LL | (long long)p) + (long long)(! ((int)p_11 * 22522)) <= (long long)(
      (int)v_21 - (int)v_27)) {
    v_17 = (long long)v_19;
    v = (short)((0ULL / (p_15 + 505ULL)) % (unsigned long long)(105 / (
                                                                (int)(- v_4) + 861) + 958));
    v_4 = (char)p_9;
  }
  else {
    v_23 = (short)(((long long)v_25 / (v_17 % (long long)((int)v_27 + 823) + 693LL)) / (long long)(
                   (-23695 * v_29 & (int)(- v_31)) + 423));
    v_4 = (char)(! ((unsigned long long)((int)v_23 + (int)p_11) * - p_15));
    v_17 = (long long)v_21;
  }
  if ((unsigned long long)(((int)p ^ 8541) - (int)(- p_11) * 56601) == ~ (
      (unsigned long long)p_13 % (p_15 + 945ULL) - (unsigned long long)(
      12497LL / (v_17 + 966LL)))) {
    result = (signed char)(~ (unsigned short)60585);
    result = result;
  }
  else {
    v_6 = (long long)p_9;
    v = (short)((long long)(~ (~ v_4)) ^ (long long)(~ v) / ((v_6 + (long long)p) + 958LL));
    result = (signed char)(! (! ((int)v | 34465)));
  }
  return result;
}


