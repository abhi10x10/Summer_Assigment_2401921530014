package live;
import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;
public class Test {
    public static void main(String[] args) {
        Veena v = new Veena();
        v.play();
        Saxophone s = new Saxophone();
        s.play();
        
        Playable veena = new Veena();
        Playable saxophone = new Saxophone();

        veena.play();
        saxophone.play();
    }
}