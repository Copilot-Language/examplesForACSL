/* File: "trigger_guard_alert_WCVtcpa.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ?wellClearViolation",color=plum, style=filled]
0 -> 1
2 [label="op2: &&",color=green4, style=filled]
1 -> 2
3 [label="label: ?horizontalWCV",color=plum, style=filled]
2 -> 3
4 [label="op2: ||",color=green4, style=filled]
3 -> 4
5 [label="op2: <=",color=green4, style=filled]
4 -> 5
6 [label="label: ?norm2dim",color=plum, style=filled]
5 -> 6
7 [label="ext_sqrt_6",color=cyan4, style=filled]
6 -> 7
49 [label="label: ?nm",color=plum, style=filled]
5 -> 49
50 [label="const: 1852.0",color=red1, style=filled]
49 -> 50
51 [label="op2: &&",color=green4, style=filled]
4 -> 51
52 [label="op2: <=",color=green4, style=filled]
51 -> 52
53 [label="label: ?norm2dim",color=plum, style=filled]
52 -> 53
54 [label="ext_sqrt_7",color=cyan4, style=filled]
53 -> 54
724 [label="label: ?nm",color=plum, style=filled]
52 -> 724
725 [label="const: 1852.0",color=red1, style=filled]
724 -> 725
726 [label="op2: &&",color=green4, style=filled]
51 -> 726
727 [label="op2: <=",color=green4, style=filled]
726 -> 727
728 [label="const: 0.0",color=red1, style=filled]
727 -> 728
729 [label="label: ?tcpa",color=plum, style=filled]
727 -> 729
730 [label="op3: mux",color=green4, style=filled]
729 -> 730
731 [label="op2: &&",color=green4, style=filled]
730 -> 731
732 [label="op2: ==",color=green4, style=filled]
731 -> 732
733 [label="op2: -",color=green4, style=filled]
732 -> 733
734 [label="label: ?ownVelocityX",color=plum, style=filled]
733 -> 734
735 [label="op2: /",color=green4, style=filled]
734 -> 735
736 [label="op2: *",color=green4, style=filled]
735 -> 736
737 [label="ext_ownship_vx",color=cyan1, style=filled]
736 -> 737
738 [label="const: 0.3048",color=red1, style=filled]
736 -> 738
739 [label="const: 1.0",color=red1, style=filled]
735 -> 739
740 [label="label: ?intVelocityX",color=plum, style=filled]
733 -> 740
741 [label="op2: /",color=green4, style=filled]
740 -> 741
742 [label="op2: *",color=green4, style=filled]
741 -> 742
743 [label="ext_intruder_vx",color=cyan1, style=filled]
742 -> 743
744 [label="const: 0.3048",color=red1, style=filled]
742 -> 744
745 [label="const: 1.0",color=red1, style=filled]
741 -> 745
746 [label="const: 0.0",color=red1, style=filled]
732 -> 746
747 [label="op2: ==",color=green4, style=filled]
731 -> 747
748 [label="op2: -",color=green4, style=filled]
747 -> 748
749 [label="label: ?ownVelocityY",color=plum, style=filled]
748 -> 749
750 [label="op2: /",color=green4, style=filled]
749 -> 750
751 [label="op2: *",color=green4, style=filled]
750 -> 751
752 [label="ext_ownship_vy",color=cyan1, style=filled]
751 -> 752
753 [label="const: 0.3048",color=red1, style=filled]
751 -> 753
754 [label="const: 1.0",color=red1, style=filled]
750 -> 754
755 [label="label: ?intVelocityY",color=plum, style=filled]
748 -> 755
756 [label="op2: /",color=green4, style=filled]
755 -> 756
757 [label="op2: *",color=green4, style=filled]
756 -> 757
758 [label="ext_intruder_vy",color=cyan1, style=filled]
757 -> 758
759 [label="const: 0.3048",color=red1, style=filled]
757 -> 759
760 [label="const: 1.0",color=red1, style=filled]
756 -> 760
761 [label="const: 0.0",color=red1, style=filled]
747 -> 761
762 [label="const: 0.0",color=red1, style=filled]
730 -> 762
763 [label="op2: /",color=green4, style=filled]
730 -> 763
764 [label="op2: -",color=green4, style=filled]
763 -> 764
765 [label="const: 0.0",color=red1, style=filled]
764 -> 765
766 [label="label: ?scalar2dim",color=plum, style=filled]
764 -> 766
767 [label="op2: +",color=green4, style=filled]
766 -> 767
768 [label="op2: *",color=green4, style=filled]
767 -> 768
769 [label="op2: -",color=green4, style=filled]
768 -> 769
770 [label="label: ?ownPositionX",color=plum, style=filled]
769 -> 770
771 [label="op2: *",color=green4, style=filled]
770 -> 771
772 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
771 -> 772
773 [label="const: 0.3048",color=red1, style=filled]
771 -> 773
774 [label="label: ?intPositionX",color=plum, style=filled]
769 -> 774
775 [label="op2: *",color=green4, style=filled]
774 -> 775
776 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
775 -> 776
777 [label="const: 0.3048",color=red1, style=filled]
775 -> 777
778 [label="op2: -",color=green4, style=filled]
768 -> 778
779 [label="label: ?ownVelocityX",color=plum, style=filled]
778 -> 779
780 [label="op2: /",color=green4, style=filled]
779 -> 780
781 [label="op2: *",color=green4, style=filled]
780 -> 781
782 [label="ext_ownship_vx",color=cyan1, style=filled]
781 -> 782
783 [label="const: 0.3048",color=red1, style=filled]
781 -> 783
784 [label="const: 1.0",color=red1, style=filled]
780 -> 784
785 [label="label: ?intVelocityX",color=plum, style=filled]
778 -> 785
786 [label="op2: /",color=green4, style=filled]
785 -> 786
787 [label="op2: *",color=green4, style=filled]
786 -> 787
788 [label="ext_intruder_vx",color=cyan1, style=filled]
787 -> 788
789 [label="const: 0.3048",color=red1, style=filled]
787 -> 789
790 [label="const: 1.0",color=red1, style=filled]
786 -> 790
791 [label="op2: *",color=green4, style=filled]
767 -> 791
792 [label="op2: -",color=green4, style=filled]
791 -> 792
793 [label="label: ?ownPositionY",color=plum, style=filled]
792 -> 793
794 [label="op2: *",color=green4, style=filled]
793 -> 794
795 [label="ext_ownship_y_position_ft",color=cyan1, style=filled]
794 -> 795
796 [label="const: 0.3048",color=red1, style=filled]
794 -> 796
797 [label="label: ?intPositionY",color=plum, style=filled]
792 -> 797
798 [label="op2: *",color=green4, style=filled]
797 -> 798
799 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
798 -> 799
800 [label="const: 0.3048",color=red1, style=filled]
798 -> 800
801 [label="op2: -",color=green4, style=filled]
791 -> 801
802 [label="label: ?ownVelocityY",color=plum, style=filled]
801 -> 802
803 [label="op2: /",color=green4, style=filled]
802 -> 803
804 [label="op2: *",color=green4, style=filled]
803 -> 804
805 [label="ext_ownship_vy",color=cyan1, style=filled]
804 -> 805
806 [label="const: 0.3048",color=red1, style=filled]
804 -> 806
807 [label="const: 1.0",color=red1, style=filled]
803 -> 807
808 [label="label: ?intVelocityY",color=plum, style=filled]
801 -> 808
809 [label="op2: /",color=green4, style=filled]
808 -> 809
810 [label="op2: *",color=green4, style=filled]
809 -> 810
811 [label="ext_intruder_vy",color=cyan1, style=filled]
810 -> 811
812 [label="const: 0.3048",color=red1, style=filled]
810 -> 812
813 [label="const: 1.0",color=red1, style=filled]
809 -> 813
814 [label="label: ?normsq2dim",color=plum, style=filled]
763 -> 814
815 [label="label: ?scalar2dim",color=plum, style=filled]
814 -> 815
816 [label="op2: +",color=green4, style=filled]
815 -> 816
817 [label="op2: *",color=green4, style=filled]
816 -> 817
818 [label="op2: -",color=green4, style=filled]
817 -> 818
819 [label="label: ?ownVelocityX",color=plum, style=filled]
818 -> 819
820 [label="op2: /",color=green4, style=filled]
819 -> 820
821 [label="op2: *",color=green4, style=filled]
820 -> 821
822 [label="ext_ownship_vx",color=cyan1, style=filled]
821 -> 822
823 [label="const: 0.3048",color=red1, style=filled]
821 -> 823
824 [label="const: 1.0",color=red1, style=filled]
820 -> 824
825 [label="label: ?intVelocityX",color=plum, style=filled]
818 -> 825
826 [label="op2: /",color=green4, style=filled]
825 -> 826
827 [label="op2: *",color=green4, style=filled]
826 -> 827
828 [label="ext_intruder_vx",color=cyan1, style=filled]
827 -> 828
829 [label="const: 0.3048",color=red1, style=filled]
827 -> 829
830 [label="const: 1.0",color=red1, style=filled]
826 -> 830
831 [label="op2: -",color=green4, style=filled]
817 -> 831
832 [label="label: ?ownVelocityX",color=plum, style=filled]
831 -> 832
833 [label="op2: /",color=green4, style=filled]
832 -> 833
834 [label="op2: *",color=green4, style=filled]
833 -> 834
835 [label="ext_ownship_vx",color=cyan1, style=filled]
834 -> 835
836 [label="const: 0.3048",color=red1, style=filled]
834 -> 836
837 [label="const: 1.0",color=red1, style=filled]
833 -> 837
838 [label="label: ?intVelocityX",color=plum, style=filled]
831 -> 838
839 [label="op2: /",color=green4, style=filled]
838 -> 839
840 [label="op2: *",color=green4, style=filled]
839 -> 840
841 [label="ext_intruder_vx",color=cyan1, style=filled]
840 -> 841
842 [label="const: 0.3048",color=red1, style=filled]
840 -> 842
843 [label="const: 1.0",color=red1, style=filled]
839 -> 843
844 [label="op2: *",color=green4, style=filled]
816 -> 844
845 [label="op2: -",color=green4, style=filled]
844 -> 845
846 [label="label: ?ownVelocityY",color=plum, style=filled]
845 -> 846
847 [label="op2: /",color=green4, style=filled]
846 -> 847
848 [label="op2: *",color=green4, style=filled]
847 -> 848
849 [label="ext_ownship_vy",color=cyan1, style=filled]
848 -> 849
850 [label="const: 0.3048",color=red1, style=filled]
848 -> 850
851 [label="const: 1.0",color=red1, style=filled]
847 -> 851
852 [label="label: ?intVelocityY",color=plum, style=filled]
845 -> 852
853 [label="op2: /",color=green4, style=filled]
852 -> 853
854 [label="op2: *",color=green4, style=filled]
853 -> 854
855 [label="ext_intruder_vy",color=cyan1, style=filled]
854 -> 855
856 [label="const: 0.3048",color=red1, style=filled]
854 -> 856
857 [label="const: 1.0",color=red1, style=filled]
853 -> 857
858 [label="op2: -",color=green4, style=filled]
844 -> 858
859 [label="label: ?ownVelocityY",color=plum, style=filled]
858 -> 859
860 [label="op2: /",color=green4, style=filled]
859 -> 860
861 [label="op2: *",color=green4, style=filled]
860 -> 861
862 [label="ext_ownship_vy",color=cyan1, style=filled]
861 -> 862
863 [label="const: 0.3048",color=red1, style=filled]
861 -> 863
864 [label="const: 1.0",color=red1, style=filled]
860 -> 864
865 [label="label: ?intVelocityY",color=plum, style=filled]
858 -> 865
866 [label="op2: /",color=green4, style=filled]
865 -> 866
867 [label="op2: *",color=green4, style=filled]
866 -> 867
868 [label="ext_intruder_vy",color=cyan1, style=filled]
867 -> 868
869 [label="const: 0.3048",color=red1, style=filled]
867 -> 869
870 [label="const: 1.0",color=red1, style=filled]
866 -> 870
871 [label="op2: <=",color=green4, style=filled]
726 -> 871
872 [label="label: ?tcpa",color=plum, style=filled]
871 -> 872
873 [label="op3: mux",color=green4, style=filled]
872 -> 873
874 [label="op2: &&",color=green4, style=filled]
873 -> 874
875 [label="op2: ==",color=green4, style=filled]
874 -> 875
876 [label="op2: -",color=green4, style=filled]
875 -> 876
877 [label="label: ?ownVelocityX",color=plum, style=filled]
876 -> 877
878 [label="op2: /",color=green4, style=filled]
877 -> 878
879 [label="op2: *",color=green4, style=filled]
878 -> 879
880 [label="ext_ownship_vx",color=cyan1, style=filled]
879 -> 880
881 [label="const: 0.3048",color=red1, style=filled]
879 -> 881
882 [label="const: 1.0",color=red1, style=filled]
878 -> 882
883 [label="label: ?intVelocityX",color=plum, style=filled]
876 -> 883
884 [label="op2: /",color=green4, style=filled]
883 -> 884
885 [label="op2: *",color=green4, style=filled]
884 -> 885
886 [label="ext_intruder_vx",color=cyan1, style=filled]
885 -> 886
887 [label="const: 0.3048",color=red1, style=filled]
885 -> 887
888 [label="const: 1.0",color=red1, style=filled]
884 -> 888
889 [label="const: 0.0",color=red1, style=filled]
875 -> 889
890 [label="op2: ==",color=green4, style=filled]
874 -> 890
891 [label="op2: -",color=green4, style=filled]
890 -> 891
892 [label="label: ?ownVelocityY",color=plum, style=filled]
891 -> 892
893 [label="op2: /",color=green4, style=filled]
892 -> 893
894 [label="op2: *",color=green4, style=filled]
893 -> 894
895 [label="ext_ownship_vy",color=cyan1, style=filled]
894 -> 895
896 [label="const: 0.3048",color=red1, style=filled]
894 -> 896
897 [label="const: 1.0",color=red1, style=filled]
893 -> 897
898 [label="label: ?intVelocityY",color=plum, style=filled]
891 -> 898
899 [label="op2: /",color=green4, style=filled]
898 -> 899
900 [label="op2: *",color=green4, style=filled]
899 -> 900
901 [label="ext_intruder_vy",color=cyan1, style=filled]
900 -> 901
902 [label="const: 0.3048",color=red1, style=filled]
900 -> 902
903 [label="const: 1.0",color=red1, style=filled]
899 -> 903
904 [label="const: 0.0",color=red1, style=filled]
890 -> 904
905 [label="const: 0.0",color=red1, style=filled]
873 -> 905
906 [label="op2: /",color=green4, style=filled]
873 -> 906
907 [label="op2: -",color=green4, style=filled]
906 -> 907
908 [label="const: 0.0",color=red1, style=filled]
907 -> 908
909 [label="label: ?scalar2dim",color=plum, style=filled]
907 -> 909
910 [label="op2: +",color=green4, style=filled]
909 -> 910
911 [label="op2: *",color=green4, style=filled]
910 -> 911
912 [label="op2: -",color=green4, style=filled]
911 -> 912
913 [label="label: ?ownPositionX",color=plum, style=filled]
912 -> 913
914 [label="op2: *",color=green4, style=filled]
913 -> 914
915 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
914 -> 915
916 [label="const: 0.3048",color=red1, style=filled]
914 -> 916
917 [label="label: ?intPositionX",color=plum, style=filled]
912 -> 917
918 [label="op2: *",color=green4, style=filled]
917 -> 918
919 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
918 -> 919
920 [label="const: 0.3048",color=red1, style=filled]
918 -> 920
921 [label="op2: -",color=green4, style=filled]
911 -> 921
922 [label="label: ?ownVelocityX",color=plum, style=filled]
921 -> 922
923 [label="op2: /",color=green4, style=filled]
922 -> 923
924 [label="op2: *",color=green4, style=filled]
923 -> 924
925 [label="ext_ownship_vx",color=cyan1, style=filled]
924 -> 925
926 [label="const: 0.3048",color=red1, style=filled]
924 -> 926
927 [label="const: 1.0",color=red1, style=filled]
923 -> 927
928 [label="label: ?intVelocityX",color=plum, style=filled]
921 -> 928
929 [label="op2: /",color=green4, style=filled]
928 -> 929
930 [label="op2: *",color=green4, style=filled]
929 -> 930
931 [label="ext_intruder_vx",color=cyan1, style=filled]
930 -> 931
932 [label="const: 0.3048",color=red1, style=filled]
930 -> 932
933 [label="const: 1.0",color=red1, style=filled]
929 -> 933
934 [label="op2: *",color=green4, style=filled]
910 -> 934
935 [label="op2: -",color=green4, style=filled]
934 -> 935
936 [label="label: ?ownPositionY",color=plum, style=filled]
935 -> 936
937 [label="op2: *",color=green4, style=filled]
936 -> 937
938 [label="ext_ownship_y_position_ft",color=cyan1, style=filled]
937 -> 938
939 [label="const: 0.3048",color=red1, style=filled]
937 -> 939
940 [label="label: ?intPositionY",color=plum, style=filled]
935 -> 940
941 [label="op2: *",color=green4, style=filled]
940 -> 941
942 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
941 -> 942
943 [label="const: 0.3048",color=red1, style=filled]
941 -> 943
944 [label="op2: -",color=green4, style=filled]
934 -> 944
945 [label="label: ?ownVelocityY",color=plum, style=filled]
944 -> 945
946 [label="op2: /",color=green4, style=filled]
945 -> 946
947 [label="op2: *",color=green4, style=filled]
946 -> 947
948 [label="ext_ownship_vy",color=cyan1, style=filled]
947 -> 948
949 [label="const: 0.3048",color=red1, style=filled]
947 -> 949
950 [label="const: 1.0",color=red1, style=filled]
946 -> 950
951 [label="label: ?intVelocityY",color=plum, style=filled]
944 -> 951
952 [label="op2: /",color=green4, style=filled]
951 -> 952
953 [label="op2: *",color=green4, style=filled]
952 -> 953
954 [label="ext_intruder_vy",color=cyan1, style=filled]
953 -> 954
955 [label="const: 0.3048",color=red1, style=filled]
953 -> 955
956 [label="const: 1.0",color=red1, style=filled]
952 -> 956
957 [label="label: ?normsq2dim",color=plum, style=filled]
906 -> 957
958 [label="label: ?scalar2dim",color=plum, style=filled]
957 -> 958
959 [label="op2: +",color=green4, style=filled]
958 -> 959
960 [label="op2: *",color=green4, style=filled]
959 -> 960
961 [label="op2: -",color=green4, style=filled]
960 -> 961
962 [label="label: ?ownVelocityX",color=plum, style=filled]
961 -> 962
963 [label="op2: /",color=green4, style=filled]
962 -> 963
964 [label="op2: *",color=green4, style=filled]
963 -> 964
965 [label="ext_ownship_vx",color=cyan1, style=filled]
964 -> 965
966 [label="const: 0.3048",color=red1, style=filled]
964 -> 966
967 [label="const: 1.0",color=red1, style=filled]
963 -> 967
968 [label="label: ?intVelocityX",color=plum, style=filled]
961 -> 968
969 [label="op2: /",color=green4, style=filled]
968 -> 969
970 [label="op2: *",color=green4, style=filled]
969 -> 970
971 [label="ext_intruder_vx",color=cyan1, style=filled]
970 -> 971
972 [label="const: 0.3048",color=red1, style=filled]
970 -> 972
973 [label="const: 1.0",color=red1, style=filled]
969 -> 973
974 [label="op2: -",color=green4, style=filled]
960 -> 974
975 [label="label: ?ownVelocityX",color=plum, style=filled]
974 -> 975
976 [label="op2: /",color=green4, style=filled]
975 -> 976
977 [label="op2: *",color=green4, style=filled]
976 -> 977
978 [label="ext_ownship_vx",color=cyan1, style=filled]
977 -> 978
979 [label="const: 0.3048",color=red1, style=filled]
977 -> 979
980 [label="const: 1.0",color=red1, style=filled]
976 -> 980
981 [label="label: ?intVelocityX",color=plum, style=filled]
974 -> 981
982 [label="op2: /",color=green4, style=filled]
981 -> 982
983 [label="op2: *",color=green4, style=filled]
982 -> 983
984 [label="ext_intruder_vx",color=cyan1, style=filled]
983 -> 984
985 [label="const: 0.3048",color=red1, style=filled]
983 -> 985
986 [label="const: 1.0",color=red1, style=filled]
982 -> 986
987 [label="op2: *",color=green4, style=filled]
959 -> 987
988 [label="op2: -",color=green4, style=filled]
987 -> 988
989 [label="label: ?ownVelocityY",color=plum, style=filled]
988 -> 989
990 [label="op2: /",color=green4, style=filled]
989 -> 990
991 [label="op2: *",color=green4, style=filled]
990 -> 991
992 [label="ext_ownship_vy",color=cyan1, style=filled]
991 -> 992
993 [label="const: 0.3048",color=red1, style=filled]
991 -> 993
994 [label="const: 1.0",color=red1, style=filled]
990 -> 994
995 [label="label: ?intVelocityY",color=plum, style=filled]
988 -> 995
996 [label="op2: /",color=green4, style=filled]
995 -> 996
997 [label="op2: *",color=green4, style=filled]
996 -> 997
998 [label="ext_intruder_vy",color=cyan1, style=filled]
997 -> 998
999 [label="const: 0.3048",color=red1, style=filled]
997 -> 999
1000 [label="const: 1.0",color=red1, style=filled]
996 -> 1000
1001 [label="op2: -",color=green4, style=filled]
987 -> 1001
1002 [label="label: ?ownVelocityY",color=plum, style=filled]
1001 -> 1002
1003 [label="op2: /",color=green4, style=filled]
1002 -> 1003
1004 [label="op2: *",color=green4, style=filled]
1003 -> 1004
1005 [label="ext_ownship_vy",color=cyan1, style=filled]
1004 -> 1005
1006 [label="const: 0.3048",color=red1, style=filled]
1004 -> 1006
1007 [label="const: 1.0",color=red1, style=filled]
1003 -> 1007
1008 [label="label: ?intVelocityY",color=plum, style=filled]
1001 -> 1008
1009 [label="op2: /",color=green4, style=filled]
1008 -> 1009
1010 [label="op2: *",color=green4, style=filled]
1009 -> 1010
1011 [label="ext_intruder_vy",color=cyan1, style=filled]
1010 -> 1011
1012 [label="const: 0.3048",color=red1, style=filled]
1010 -> 1012
1013 [label="const: 1.0",color=red1, style=filled]
1009 -> 1013
1014 [label="const: 30.0",color=red1, style=filled]
871 -> 1014
1015 [label="label: ?verticalWCV",color=plum, style=filled]
2 -> 1015
1016 [label="op2: ||",color=green4, style=filled]
1015 -> 1016
1017 [label="op2: <=",color=green4, style=filled]
1016 -> 1017
1018 [label="op1: abs",color=green4, style=filled]
1017 -> 1018
1019 [label="op2: -",color=green4, style=filled]
1018 -> 1019
1020 [label="label: ?ownPositionZ",color=plum, style=filled]
1019 -> 1020
1021 [label="op2: *",color=green4, style=filled]
1020 -> 1021
1022 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1021 -> 1022
1023 [label="const: 0.3048",color=red1, style=filled]
1021 -> 1023
1024 [label="label: ?intPositionZ",color=plum, style=filled]
1019 -> 1024
1025 [label="op2: *",color=green4, style=filled]
1024 -> 1025
1026 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1025 -> 1026
1027 [label="const: 0.3048",color=red1, style=filled]
1025 -> 1027
1028 [label="const: 144.78",color=red1, style=filled]
1017 -> 1028
1029 [label="op2: &&",color=green4, style=filled]
1016 -> 1029
1030 [label="op2: <=",color=green4, style=filled]
1029 -> 1030
1031 [label="const: 0.0",color=red1, style=filled]
1030 -> 1031
1032 [label="label: ?tcoa",color=plum, style=filled]
1030 -> 1032
1033 [label="op3: mux",color=green4, style=filled]
1032 -> 1033
1034 [label="op2: <",color=green4, style=filled]
1033 -> 1034
1035 [label="op2: *",color=green4, style=filled]
1034 -> 1035
1036 [label="op2: -",color=green4, style=filled]
1035 -> 1036
1037 [label="label: ?ownPositionZ",color=plum, style=filled]
1036 -> 1037
1038 [label="op2: *",color=green4, style=filled]
1037 -> 1038
1039 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1038 -> 1039
1040 [label="const: 0.3048",color=red1, style=filled]
1038 -> 1040
1041 [label="label: ?intPositionZ",color=plum, style=filled]
1036 -> 1041
1042 [label="op2: *",color=green4, style=filled]
1041 -> 1042
1043 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1042 -> 1043
1044 [label="const: 0.3048",color=red1, style=filled]
1042 -> 1044
1045 [label="op2: -",color=green4, style=filled]
1035 -> 1045
1046 [label="label: ?ownVelocityZ",color=plum, style=filled]
1045 -> 1046
1047 [label="op2: /",color=green4, style=filled]
1046 -> 1047
1048 [label="op2: *",color=green4, style=filled]
1047 -> 1048
1049 [label="ext_ownship_vz",color=cyan1, style=filled]
1048 -> 1049
1050 [label="const: 0.3048",color=red1, style=filled]
1048 -> 1050
1051 [label="const: 1.0",color=red1, style=filled]
1047 -> 1051
1052 [label="label: ?intVelocityZ",color=plum, style=filled]
1045 -> 1052
1053 [label="op2: /",color=green4, style=filled]
1052 -> 1053
1054 [label="op2: *",color=green4, style=filled]
1053 -> 1054
1055 [label="ext_intruder_vz",color=cyan1, style=filled]
1054 -> 1055
1056 [label="const: 0.3048",color=red1, style=filled]
1054 -> 1056
1057 [label="const: 1.0",color=red1, style=filled]
1053 -> 1057
1058 [label="const: 0.0",color=red1, style=filled]
1034 -> 1058
1059 [label="op2: /",color=green4, style=filled]
1033 -> 1059
1060 [label="op2: -",color=green4, style=filled]
1059 -> 1060
1061 [label="const: 0.0",color=red1, style=filled]
1060 -> 1061
1062 [label="op2: -",color=green4, style=filled]
1060 -> 1062
1063 [label="label: ?ownPositionZ",color=plum, style=filled]
1062 -> 1063
1064 [label="op2: *",color=green4, style=filled]
1063 -> 1064
1065 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1064 -> 1065
1066 [label="const: 0.3048",color=red1, style=filled]
1064 -> 1066
1067 [label="label: ?intPositionZ",color=plum, style=filled]
1062 -> 1067
1068 [label="op2: *",color=green4, style=filled]
1067 -> 1068
1069 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1068 -> 1069
1070 [label="const: 0.3048",color=red1, style=filled]
1068 -> 1070
1071 [label="op2: -",color=green4, style=filled]
1059 -> 1071
1072 [label="label: ?ownVelocityZ",color=plum, style=filled]
1071 -> 1072
1073 [label="op2: /",color=green4, style=filled]
1072 -> 1073
1074 [label="op2: *",color=green4, style=filled]
1073 -> 1074
1075 [label="ext_ownship_vz",color=cyan1, style=filled]
1074 -> 1075
1076 [label="const: 0.3048",color=red1, style=filled]
1074 -> 1076
1077 [label="const: 1.0",color=red1, style=filled]
1073 -> 1077
1078 [label="label: ?intVelocityZ",color=plum, style=filled]
1071 -> 1078
1079 [label="op2: /",color=green4, style=filled]
1078 -> 1079
1080 [label="op2: *",color=green4, style=filled]
1079 -> 1080
1081 [label="ext_intruder_vz",color=cyan1, style=filled]
1080 -> 1081
1082 [label="const: 0.3048",color=red1, style=filled]
1080 -> 1082
1083 [label="const: 1.0",color=red1, style=filled]
1079 -> 1083
1084 [label="const: -1.0",color=red1, style=filled]
1033 -> 1084
1085 [label="op2: <=",color=green4, style=filled]
1029 -> 1085
1086 [label="label: ?tcoa",color=plum, style=filled]
1085 -> 1086
1087 [label="op3: mux",color=green4, style=filled]
1086 -> 1087
1088 [label="op2: <",color=green4, style=filled]
1087 -> 1088
1089 [label="op2: *",color=green4, style=filled]
1088 -> 1089
1090 [label="op2: -",color=green4, style=filled]
1089 -> 1090
1091 [label="label: ?ownPositionZ",color=plum, style=filled]
1090 -> 1091
1092 [label="op2: *",color=green4, style=filled]
1091 -> 1092
1093 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1092 -> 1093
1094 [label="const: 0.3048",color=red1, style=filled]
1092 -> 1094
1095 [label="label: ?intPositionZ",color=plum, style=filled]
1090 -> 1095
1096 [label="op2: *",color=green4, style=filled]
1095 -> 1096
1097 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1096 -> 1097
1098 [label="const: 0.3048",color=red1, style=filled]
1096 -> 1098
1099 [label="op2: -",color=green4, style=filled]
1089 -> 1099
1100 [label="label: ?ownVelocityZ",color=plum, style=filled]
1099 -> 1100
1101 [label="op2: /",color=green4, style=filled]
1100 -> 1101
1102 [label="op2: *",color=green4, style=filled]
1101 -> 1102
1103 [label="ext_ownship_vz",color=cyan1, style=filled]
1102 -> 1103
1104 [label="const: 0.3048",color=red1, style=filled]
1102 -> 1104
1105 [label="const: 1.0",color=red1, style=filled]
1101 -> 1105
1106 [label="label: ?intVelocityZ",color=plum, style=filled]
1099 -> 1106
1107 [label="op2: /",color=green4, style=filled]
1106 -> 1107
1108 [label="op2: *",color=green4, style=filled]
1107 -> 1108
1109 [label="ext_intruder_vz",color=cyan1, style=filled]
1108 -> 1109
1110 [label="const: 0.3048",color=red1, style=filled]
1108 -> 1110
1111 [label="const: 1.0",color=red1, style=filled]
1107 -> 1111
1112 [label="const: 0.0",color=red1, style=filled]
1088 -> 1112
1113 [label="op2: /",color=green4, style=filled]
1087 -> 1113
1114 [label="op2: -",color=green4, style=filled]
1113 -> 1114
1115 [label="const: 0.0",color=red1, style=filled]
1114 -> 1115
1116 [label="op2: -",color=green4, style=filled]
1114 -> 1116
1117 [label="label: ?ownPositionZ",color=plum, style=filled]
1116 -> 1117
1118 [label="op2: *",color=green4, style=filled]
1117 -> 1118
1119 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1118 -> 1119
1120 [label="const: 0.3048",color=red1, style=filled]
1118 -> 1120
1121 [label="label: ?intPositionZ",color=plum, style=filled]
1116 -> 1121
1122 [label="op2: *",color=green4, style=filled]
1121 -> 1122
1123 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1122 -> 1123
1124 [label="const: 0.3048",color=red1, style=filled]
1122 -> 1124
1125 [label="op2: -",color=green4, style=filled]
1113 -> 1125
1126 [label="label: ?ownVelocityZ",color=plum, style=filled]
1125 -> 1126
1127 [label="op2: /",color=green4, style=filled]
1126 -> 1127
1128 [label="op2: *",color=green4, style=filled]
1127 -> 1128
1129 [label="ext_ownship_vz",color=cyan1, style=filled]
1128 -> 1129
1130 [label="const: 0.3048",color=red1, style=filled]
1128 -> 1130
1131 [label="const: 1.0",color=red1, style=filled]
1127 -> 1131
1132 [label="label: ?intVelocityZ",color=plum, style=filled]
1125 -> 1132
1133 [label="op2: /",color=green4, style=filled]
1132 -> 1133
1134 [label="op2: *",color=green4, style=filled]
1133 -> 1134
1135 [label="ext_intruder_vz",color=cyan1, style=filled]
1134 -> 1135
1136 [label="const: 0.3048",color=red1, style=filled]
1134 -> 1136
1137 [label="const: 1.0",color=red1, style=filled]
1133 -> 1137
1138 [label="const: -1.0",color=red1, style=filled]
1087 -> 1138
1139 [label="const: 30.0",color=red1, style=filled]
1085 -> 1139


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((ext_sqrt_6)) <= ((1852.0)))) || ((((((ext_sqrt_7)) <= ((1852.0)))) && (((((0.0) <= ((( ((((((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))) == (0.0))) && ((((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))) == (0.0))))) ? (0.0) : (((((0.0) - (((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_y_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))) / ((((((((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))))))))) && ((((( ((((((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))) == (0.0))) && ((((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))) == (0.0))))) ? (0.0) : (((((0.0) - (((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_y_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))) / ((((((((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))))))) <= (30.0)))))))))) && (((((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) > 0)? ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) : -((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048))))))) <= (144.78))) || (((((0.0) <= ((( ((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) < (0.0))) ? (((((0.0) - ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))))) / ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) : (-1.0)))))) && ((((( ((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) < (0.0))) ? (((((0.0) - ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))))) / ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) : (-1.0)))) <= (30.0)))))))))));
*/
SBool trigger_guard_alert_WCVtcpa(const SDouble ext_sqrt_6,
                                  const SDouble ext_ownship_x_position_ft,
                                  const SDouble ext_intruder_x_position_ft,
                                  const SDouble ext_ownship_y_position_ft,
                                  const SDouble ext_intruder_y_position_ft,
                                  const SDouble ext_sqrt_7, const SDouble ext_ownship_vx,
                                  const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                                  const SDouble ext_intruder_vy,
                                  const SDouble ext_ownship_z_position_ft,
                                  const SDouble ext_intruder_z_position_ft,
                                  const SDouble ext_ownship_vz, const SDouble ext_intruder_vz)
{
  const SDouble s0 = ext_sqrt_6;
  const SDouble s1 = ext_ownship_x_position_ft;
  const SDouble s2 = ext_intruder_x_position_ft;
  const SDouble s3 = ext_ownship_y_position_ft;
  const SDouble s4 = ext_intruder_y_position_ft;
  const SDouble s5 = ext_sqrt_7;
  const SDouble s6 = ext_ownship_vx;
  const SDouble s7 = ext_intruder_vx;
  const SDouble s8 = ext_ownship_vy;
  const SDouble s9 = ext_intruder_vy;
  const SDouble s10 = ext_ownship_z_position_ft;
  const SDouble s11 = ext_intruder_z_position_ft;
  const SDouble s12 = ext_ownship_vz;
  const SDouble s13 = ext_intruder_vz;
  const SDouble s14 = s0 /* ?norm2dim */;
  const SBool   s16 = s14 <= 1852.0;
  const SDouble s17 = s5 /* ?norm2dim */;
  const SBool   s18 = s17 <= 1852.0;
  const SDouble s21 = s6 * 0.3048;
  const SDouble s23 = s21 / 1.0;
  const SDouble s24 = s23 /* ?ownVelocityX */;
  const SDouble s25 = s7 * 0.3048;
  const SDouble s26 = s25 / 1.0;
  const SDouble s27 = s26 /* ?intVelocityX */;
  const SDouble s28 = s24 - s27;
  const SBool   s29 = 0.0 == s28;
  const SDouble s30 = s8 * 0.3048;
  const SDouble s31 = s30 / 1.0;
  const SDouble s32 = s31 /* ?ownVelocityY */;
  const SDouble s33 = s9 * 0.3048;
  const SDouble s34 = s33 / 1.0;
  const SDouble s35 = s34 /* ?intVelocityY */;
  const SDouble s36 = s32 - s35;
  const SBool   s37 = 0.0 == s36;
  const SBool   s38 = s29 && s37;
  const SDouble s39 = s1 * 0.3048;
  const SDouble s40 = s39 /* ?ownPositionX */;
  const SDouble s41 = s2 * 0.3048;
  const SDouble s42 = s41 /* ?intPositionX */;
  const SDouble s43 = s40 - s42;
  const SDouble s44 = s28 * s43;
  const SDouble s45 = s3 * 0.3048;
  const SDouble s46 = s45 /* ?ownPositionY */;
  const SDouble s47 = s4 * 0.3048;
  const SDouble s48 = s47 /* ?intPositionY */;
  const SDouble s49 = s46 - s48;
  const SDouble s50 = s36 * s49;
  const SDouble s51 = s44 + s50;
  const SDouble s52 = s51 /* ?scalar2dim */;
  const SDouble s53 = 0.0 - s52;
  const SDouble s54 = s28 * s28;
  const SDouble s55 = s36 * s36;
  const SDouble s56 = s54 + s55;
  const SDouble s57 = s56 /* ?scalar2dim */;
  const SDouble s58 = s57 /* ?normsq2dim */;
  const SDouble s59 = s53 / s58;
  const SDouble s60 = s38 ? 0.0 : s59;
  const SDouble s61 = s60 /* ?tcpa */;
  const SBool   s62 = 0.0 <= s61;
  const SBool   s64 = s61 <= 30.0;
  const SBool   s65 = s62 && s64;
  const SBool   s66 = s18 && s65;
  const SBool   s67 = s16 || s66;
  const SBool   s68 = s67 /* ?horizontalWCV */;
  const SDouble s69 = s10 * 0.3048;
  const SDouble s70 = s69 /* ?ownPositionZ */;
  const SDouble s71 = s11 * 0.3048;
  const SDouble s72 = s71 /* ?intPositionZ */;
  const SDouble s73 = s70 - s72;
  const SDouble s74 = fabs(s73);
  const SBool   s76 = s74 <= 144.78;
  const SDouble s77 = s12 * 0.3048;
  const SDouble s78 = s77 / 1.0;
  const SDouble s79 = s78 /* ?ownVelocityZ */;
  const SDouble s80 = s13 * 0.3048;
  const SDouble s81 = s80 / 1.0;
  const SDouble s82 = s81 /* ?intVelocityZ */;
  const SDouble s83 = s79 - s82;
  const SDouble s84 = s73 * s83;
  const SBool   s85 = s84 < 0.0;
  const SDouble s86 = 0.0 - s73;
  const SDouble s87 = s86 / s83;
  const SDouble s89 = s85 ? s87 : -1.0;
  const SDouble s90 = s89 /* ?tcoa */;
  const SBool   s91 = 0.0 <= s90;
  const SBool   s92 = s90 <= 30.0;
  const SBool   s93 = s91 && s92;
  const SBool   s94 = s76 || s93;
  const SBool   s95 = s94 /* ?verticalWCV */;
  const SBool   s96 = s68 && s95;
  const SBool   s97 = s96 /* ?wellClearViolation */;

  return s97;
}
