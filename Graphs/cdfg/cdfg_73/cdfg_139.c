#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 746998995
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned char p_4, unsigned long long p_6[2], float p_11,
          long p_13)
{
  unsigned int v_21;
  double v_19;
  short v_17;
  double v_15;
  int v_9;
  unsigned long v;
  short result;
  v_21 = (unsigned int)p_11;
  v_19 = -6.1240129006e+37;
  v_17 = (short)p_13;
  v_15 = (double)p_11;
  v_9 = 47633;
  while (((long)((float)p / (- p_11 + 952.f)) | - (p % (long)(v_9 + 512))) > (long)(! (! (
         581 % ((int)p_4 + 419))))) {
    v_17 = (long long)v_21 * ((long long)v_19 * 46226LL);
    v_19 = (double)((-22772 % ((int)p_4 + 53)) * ((int)((char)-8431720265.29) - -33));
    v_15 = (double)(unsigned short)40023;
    v_9 = (int)(- (~ 4294949695UL));
  }
  while_0_break: ;
  if (((unsigned long long)((int)(~ p_4) / ((int)(~ v_17) + 621)) | p_6[0]) > 18446744073709551610ULL) 
    result = (short)(p % (long)((int)(- p_4) + 475));
  else {
    v = (unsigned long)((double)(((int)((unsigned char)4.95520450959e+37) - (int)p_4) % -97) - (
                        (v_15 + v_15) + 3552747556.));
    v_9 = (int)((428305280.f * p_11 + (p_11 + (float)v_9)) - (float)(~ (- p_13)));
    result = (short)(p_6[0] + (unsigned long long)((v * 931901759UL) / (unsigned long)(
                                                   (long)v_9 * -1041937664L + 152L)));
  }
  return result;
}


