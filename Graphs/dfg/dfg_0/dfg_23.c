//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 575000385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, double p_5, float p_7)
{
  long long v_23;
  short v_21;
  long long v_19;
  char v_17;
  unsigned long long v_15;
  long v_13;
  unsigned int v_11;
  signed char v_9;
  long v;
  signed char result;
  v_23 = (long long)p_7;
  v_21 = (short)p_5;
  v_19 = -12368LL;
  v_17 = (char)p_7;
  v_15 = 18446744073581742983ULL;
  v_13 = 64169L;
  v_9 = (signed char)p;
  v_11 = (unsigned int)(((unsigned long long)v_13 + v_15) - (unsigned long long)(
                        (long long)v_17 * v_19 + ((long long)(- v_21) + 
                                                  v_23 * -23930LL)));
  v = (long)v_11;
  result = v_9;
  result = (signed char)(-9255L % ((((long)result | v) * (long)((int)result << (
                                                                (int)((signed char)-8337332550.73) & 7)) + 
                                    (33829L / (long)((int)p + 737)) / (
                                    (long)(p_5 * (double)p_7) + 158L)) + 839L));
  return result;
}


