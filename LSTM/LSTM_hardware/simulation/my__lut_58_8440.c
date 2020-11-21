#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_79584000;

SignalI address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeaddress_79582100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8440_79584000;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),4);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makebase_79661220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8440_79584000;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makenext__data_79748520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_8440_79584000;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __78556640;

Block __79347560;

void code__79347560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(make__79453020());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79347560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79347560 = block;
   block->owner = (Object)__78556640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79347560;

   return block;
};

Block __78556480;

Block __78947120;

void code__78947120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78947120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78947120 = block;
   block->owner = (Object)__78556480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78947120;

   return block;
};

Block __78556320;

void code__78556320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79451780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78556320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78556320 = block;
   block->owner = (Object)__78556480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78556320;

   return block;
};

void code__78556480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__79452520();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__79452260();
                     src1 = make__79452240();
                     src2 = make__79452220();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__78947120();
   }
   else {
  code__78556320();
   }
      }
   }
}

Block make__78556480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78556480 = block;
   block->owner = (Object)__78556640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78556480;

   return block;
};

void code__78556640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79453180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79347560();
   }
   else {
  code__78556480();
   }
      }
   }
}

Block make__78556640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78556640 = block;
   block->owner = (Object)__79584320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78556640;

   return block;
};

Block __79391180;

void code__79391180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79391180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79391180 = block;
   block->owner = (Object)__79390180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79391180;

   return block;
};

Value make__79453760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453740() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453720() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453700() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453680() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453660() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453640() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453620() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453600() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453580() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453560() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453540() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453520() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453500() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453480() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453460() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79453180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79453020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79452520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79452260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79452240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79452220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79451780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_73817680;

SignalI lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelut_78106640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)my__lut_58_844_73817680;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__79453760();
         src1 = make__79453740();
         src2 = make__79453720();
         src3 = make__79453700();
         src4 = make__79453680();
         src5 = make__79453660();
         src6 = make__79453640();
         src7 = make__79453620();
         src8 = make__79453600();
         src9 = make__79453580();
         src10 = make__79453560();
         src11 = make__79453540();
         src12 = make__79453520();
         src13 = make__79453500();
         src14 = make__79453480();
         src15 = make__79453460();
         concat_value(16,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Behavior __79584320;

Behavior make__79584320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79584320 = behavior;
   behavior->owner = (Object)my__lut_58_844_73817680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78556640();

   return behavior;
}

Behavior __79390180;

Behavior make__79390180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79390180 = behavior;
   behavior->owner = (Object)my__lut_58_844_73817680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[lut_78106640_my__lut_58_844_73817680_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79391180();

   return behavior;
}

Scope makemy__lut_58_844_73817680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_73817680 = scope;
   scope->owner = (Object)my__lut_58_8440_79584000;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_78106640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79584320();
   scope->behaviors[1] = make__79390180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_79584000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_79584000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_79582100();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_79661220();
   systemT->outputs[1] = makenext__data_79748520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_73817680();

   return systemT;
}