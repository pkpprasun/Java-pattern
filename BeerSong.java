public class BeerSong {
    public static void main(String[] args) {
        int beerNum=99;
        String word = "bottles";

        while(beerNum > 0) {
            if(beerNum==1){
                word="bottle";

            
            System.out.println( beerNum +" " + word +"of beer of bottle ");
            }else {
                System.out.println("end this");
            }
        }
    }
    
}
//pata nai infinte loop kyu chal raha hai
