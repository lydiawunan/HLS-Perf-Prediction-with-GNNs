#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 293841440
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, long long p_9, unsigned char p_11, float p_19,
                   long p_25)
{
  signed char v_29;
  int v_27;
  signed char v_23;
  unsigned short v_21;
  char v_17;
  short v_15;
  unsigned char v_13;
  long long v_6;
  unsigned long v_4;
  unsigned long long v;
  unsigned short result;
  v_29 = (signed char)124;
  v_27 = 56032;
  v_23 = (signed char)p_19;
  v_21 = (unsigned short)3239;
  v_13 = (unsigned char)7;
  v_6 = (long long)p_19;
  v_4 = (unsigned long)p_9;
  v = 55755ULL;
  result = (unsigned short)p_9;
  while (p_9 + (long long)p_11 < (long long)(! ((-59334L / (long)((int)v_13 + 697)) / (
                                                (long)((double)p_19 * 4325141433.25) + 114L)))) {
    v_21 = (unsigned short)(((double)((int)p_11 % ((int)v_29 + 655)) / (
                             -365.569618037 / ((double)p_25 + 62.) + 788.)) * (double)(! v_6));
    v_23 = (signed char)(826674456ULL % (unsigned long long)(p_25 + 319L));
    v_13 = (unsigned char)((long long)(~ result) % (~ (- v_6) + 406LL));
  }
  while_0_break: ;
  if ((long long)((unsigned long)(- (p / 907.)) % (33932UL / (unsigned long)(
                                                   ((int)v_21 + (int)v_23) + 211) + 39UL)) == 
      (long long)(-64 % (((int)p_11 + 25565) + 809)) / (((long long)(! p_25) - 
                                                         v_6 * (long long)v_27) + 209LL)) {
    v_6 = (long long)(! (~ ((int)p_11 % 5994)));
    v = (unsigned long long)p_9;
    result = (unsigned short)((- v + (unsigned long long)v_4) * (unsigned long long)(- (
                              (double)v_6 * p)));
  }
  else {
    v_17 = (char)((unsigned int)(2 >> (- v & 31ULL)) * (unsigned int)(- v_21));
    v_15 = (short)(- ((float)((int)v_17 * (int)v_13) + (p_19 + -9683.f)));
    result = (unsigned short)((44 + ((int)v_13 & -87)) | (int)(- (p + (double)v_15)));
  }
  return result;
}


